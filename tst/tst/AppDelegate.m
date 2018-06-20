//
//  AppDelegate.m
//  tst
//
//  Created by Jermy on 2018/3/22.
//  Copyright © 2018年 Jermy. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

-(BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    
    if (!self.window.rootViewController) {
        ViewController *vc = [[ViewController alloc] init];
        vc.view.backgroundColor = [UIColor whiteColor];
        self.window.rootViewController = vc;
    }
    
    [self.window makeKeyAndVisible];
    return YES;
}

@end
