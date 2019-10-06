//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendsFeedChatMessageState : NSObject <NSCopying>
{
    long long _state;
    long long _messageTimestampInMs;
    long long _displayTimestampInMs;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long displayTimestampInMs; // @synthesize displayTimestampInMs=_displayTimestampInMs;
- (unsigned long long)hash;
- (id)initWithState:(long long)arg1 messageTimestampInMs:(long long)arg2 displayTimestampInMs:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long messageTimestampInMs; // @synthesize messageTimestampInMs=_messageTimestampInMs;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)xLogObjectInfo;

@end

