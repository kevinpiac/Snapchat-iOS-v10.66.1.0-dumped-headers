//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface SCChatReplayAnimationData : NSObject <NSCopying>
{
    long long _replayAnimationState;
    NSString *_messageId;
    UIImage *_filledReplayIconImage;
    UIImage *_emptyReplayIconImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIImage *emptyReplayIconImage; // @synthesize emptyReplayIconImage=_emptyReplayIconImage;
@property(readonly, copy, nonatomic) UIImage *filledReplayIconImage; // @synthesize filledReplayIconImage=_filledReplayIconImage;
- (unsigned long long)hash;
- (id)initWithReplayAnimationState:(long long)arg1 messageId:(id)arg2 filledReplayIconImage:(id)arg3 emptyReplayIconImage:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long replayAnimationState; // @synthesize replayAnimationState=_replayAnimationState;

@end
