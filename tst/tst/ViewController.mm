//
//  ViewController.m
//  tst
//
//  Created by Jermy on 2018/3/22.
//  Copyright © 2018年 Jermy. All rights reserved.
//

#import "ViewController.h"
#import <UIKit/UIKit.h>
#import <malloc/malloc.h>
#import <Ono/Ono.h>
#import <objc/message.h>

#define screenW ([UIScreen mainScreen].bounds.size.width)
#define screenH ([UIScreen mainScreen].bounds.size.height)

@interface ViewController ()<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController

-(void)viewDidLoad
{
    self.view.backgroundColor = [UIColor whiteColor];
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self testWebViewWithCompletionHandler:^(NSString * htmlStr) {
        NSLog(@"%@", htmlStr);
    }];
}

-(void)testWebViewWithCompletionHandler:(void (^)(NSString *))completionHandler
{
    UIWebView *webView = [UIWebView new];
    webView.frame = self.view.bounds;
    webView.delegate = self;
    
    [self.view addSubview:webView];
    
    NSString *str = @"http://m.people.cn/n4/2018/0525/c24-11039457.html";
    NSURL *url = [NSURL URLWithString:str];
    
    NSURLSessionDataTask *task = [[NSURLSession sharedSession] dataTaskWithURL:url completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        
        ONOXMLDocument *document = [ONOXMLDocument HTMLDocumentWithData:data error:nil];
        
        //h1标题
        ONOXMLElement *element = [document firstChildWithXPath:@"//*[@class = 'wb_content']/h1"];
        NSString *titleHtml = element.stringValue;
        
        //副标题
        element = [document firstChildWithXPath:@"//*[@class = 'wb_content']/p"];
        NSString *subTitle = element.stringValue;
        
        //图片
        element = [document firstChildWithXPath:@"//*[@class = 'we_img']/img"];
        NSString *img = [element valueForAttribute:@"src"];
        
        //文本1
        element = [document firstChildWithXPath:@"//*[@class = 'wb_txt']/p[2]"];
        NSString *content1 = element.stringValue;
        
        //文本2
        element = [document firstChildWithXPath:@"//*[@class = 'wb_txt']/p[3]"];
        NSString *content2 = element.stringValue;
        
        //文本3
        element = [document firstChildWithXPath:@"//*[@class = 'wb_txt']/p[4]"];
        NSString *content3 = element.stringValue;
        
        //文本4
        element = [document firstChildWithXPath:@"//*[@class = 'wb_txt']/p[5]"];
        NSString *content4 = element.stringValue;
        
        //文本5
        element = [document firstChildWithXPath:@"//*[@class = 'wb_txt']/p[6]"];
        NSString *content5 = element.stringValue;
        
        //责任编辑
        element = [document firstChildWithXPath:@"//*[@class = 'wb_content']/div[3]"];
        NSString *editor = element.stringValue;
        
        //CSS资源文件的路径
        NSString *cssPath = [[NSBundle mainBundle] pathForResource:@"html" ofType:@"css"];
        
        //javaScript
        NSString *jsPath = [[NSBundle mainBundle] pathForResource:@"html" ofType:@"js"];
        
        NSMutableString *htmlStr = [NSMutableString stringWithFormat:@"<html><head><link href=\"%@\" rel=\"stylesheet\" type=\"text/css\"></head><body><h1>%@</h1><p id=subtitle>%@</p><p><img src=%@></p><p class=content>%@</p><p class=content>%@</p><p class=content>%@</p><p class=content>%@</p><p class=content>%@</p><div id=editor>%@</div><script src=\"%@\"></script></body></html>",cssPath ,titleHtml, subTitle, img, content1, content2, content3, content4, content5, editor, jsPath];
        
        //baseURL是CSS的路径 必须设置，否则加载不上CSS文件，
        dispatch_async(dispatch_get_main_queue(), ^{
            [webView loadHTMLString:htmlStr baseURL:[NSURL URLWithString:@"file:///"]];
        });
        
        if (completionHandler) {
            completionHandler(htmlStr);
        }
    }];
    
    [task resume];
}

//拦截图片点击事件
-(BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType
{
    NSString *_request = request.URL.absoluteString;
    NSString *header = @"hj:///";
    
    NSRange range = [_request rangeOfString:header];
    if (range.location != NSNotFound) {
        NSString *action = [_request substringFromIndex:range.length + range.location];
        
        [self performSelector:NSSelectorFromString(action)];
    }
    
    return YES;
}

-(void)imageClick
{
    NSLog(@"get img click action");
}

-(void)imageDoubleClick
{
    NSLog(@"get img dobule click action");
}

@end
