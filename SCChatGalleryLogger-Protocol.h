//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCChatGalleryLogger <NSObject>
- (void)addEvent:(NSArray *)arg1 withConversationId:(NSString *)arg2;
- (void)logIfSendFromChatDrawerGalleryWithConversationId:(NSString *)arg1 result:(long long)arg2;
@end

