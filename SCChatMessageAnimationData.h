//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCChatMessageAnimationData : NSObject <NSCopying>
{
    unsigned long long _saveAnimationState;
    long long _replayAnimationState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSaveAnimationState:(unsigned long long)arg1 replayAnimationState:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long replayAnimationState; // @synthesize replayAnimationState=_replayAnimationState;
@property(readonly, nonatomic) unsigned long long saveAnimationState; // @synthesize saveAnimationState=_saveAnimationState;

@end

