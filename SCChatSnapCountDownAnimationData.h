//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChatSnapCountDownAnimationData : NSObject <NSCopying>
{
    unsigned long long _timerCountDownValue;
    NSString *_messageId;
    NSString *_conversationId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTimerCountDownValue:(unsigned long long)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long timerCountDownValue; // @synthesize timerCountDownValue=_timerCountDownValue;

@end

