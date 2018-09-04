//
//  LiveRoomPlayerViewController.h
//  TXLiteAVDemo
//
//  Created by lijie on 2017/11/22.
//  Copyright © 2017年 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LiveRoom.h"

/**
   这个类用于直播模式的普通观众和小主播
 */
@interface LiveRoomPlayerViewController : UIViewController <LiveRoomListener, UITextFieldDelegate>

@property (nonatomic, weak)    LiveRoom*          liveRoom;
@property (nonatomic, copy)    NSString*          roomName;
@property (nonatomic, copy)    NSString*          roomID;
@property (nonatomic, copy)    NSString*          userName;

@end