//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendsFeedMultiRecipientContent : NSObject <NSCopying>
{
    long long _sendingState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSendingState:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long sendingState; // @synthesize sendingState=_sendingState;

@end

