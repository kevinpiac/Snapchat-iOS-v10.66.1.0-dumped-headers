//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCNetworkImage, SCStoryRingViewModel, UIImage;

@interface SCStoryThumbnailViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowReplayState;
    SCNetworkImage *_networkImage;
    SCStoryRingViewModel *_ringViewModel;
    UIImage *_replayIcon;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithNetworkImage:(id)arg1 ringViewModel:(id)arg2 shouldShowReplayState:(_Bool)arg3 replayIcon:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(readonly, copy, nonatomic) UIImage *replayIcon; // @synthesize replayIcon=_replayIcon;
@property(readonly, copy, nonatomic) SCStoryRingViewModel *ringViewModel; // @synthesize ringViewModel=_ringViewModel;
@property(readonly, nonatomic) _Bool shouldShowReplayState; // @synthesize shouldShowReplayState=_shouldShowReplayState;

@end
