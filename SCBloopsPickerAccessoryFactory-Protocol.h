//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBloopsChatSecondTargetProvider, SCBloopsConversationCallStateListener;
@protocol SCBloopsPickerAccessory;

@protocol SCBloopsPickerAccessoryFactory <NSObject>
- (id <SCBloopsPickerAccessory>)createPickerAccessoryWithSecondTargetProvider:(SCBloopsChatSecondTargetProvider *)arg1 conversationCallStateListener:(SCBloopsConversationCallStateListener *)arg2;
@end
