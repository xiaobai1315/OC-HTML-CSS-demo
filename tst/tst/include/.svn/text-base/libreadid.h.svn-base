//
//  readersdk.h
//  readersdk
//
//  Created by Chenfan on 5/5/16.
//  Copyright © 2016 ewcdma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
//#import "ft301u.h"

#define READER_STATE_UNKNOWN    -1
#define READER_STATE_DISCONNECT  0
#define READER_STATE_CONNECTING  1
#define READER_STATE_CONNECTED   2

#define CARD_UNKNOWN    0
#define CARD_ABSENT     1
#define CARD_PRESENT    2
#define CARD_SWALLOWED  3
#define CARD_POWERED    4
#define CARD_NEGOTIABLE 5
#define CARD_SPECIFIC   6


#define CARD_COLD_RESET  0
#define CARD_POWER_DOWN  1
#define CARD_WARM_RESET  2


#define PROCESS_ID_START    0
#define PROCESS_ID_READ     1
#define PROCESS_ID_NETWORK  2
#define PROCESS_ID_AUTH     3
#define PROCESS_ID_INFO     4
#define PROCESS_ID_INFO2    5
#define PROCESS_ID_COMPLETE 6


@protocol readerDelegate;

@interface libreadid : NSObject ;

@property (assign) id<readerDelegate> delegate;
//- (void)readCert_s:(SCARDHANDLE)hCard;
//- (void)readCert:(SCARDHANDLE)hCard;
@end

@protocol readerDelegate <NSObject>

@optional

- (void)onProcessStateChange:(int)slotNum state:(int)processState;
- (void)readCert:(id)data;
@end

