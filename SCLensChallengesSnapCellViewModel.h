//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCLensChallengesStoryItem, SCLensExplorerReplayOverlayViewModel, SCNetworkImage, UIColor;

@interface SCLensChallengesSnapCellViewModel : NSObject <NSCopying, NSCoding>
{
    SCLensChallengesStoryItem *_storyItem;
    SCNetworkImage *_coverImage;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiAvatarSelfieId;
    NSString *_author;
    UIColor *_color;
    SCLensExplorerReplayOverlayViewModel *_overlayViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *coverImage; // @synthesize coverImage=_coverImage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryItem:(id)arg1 coverImage:(id)arg2;
- (id)initWithStoryItem:(id)arg1 coverImage:(id)arg2 bitmojiAvatarId:(id)arg3 bitmojiAvatarSelfieId:(id)arg4 author:(id)arg5 color:(id)arg6 overlayViewModel:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensExplorerReplayOverlayViewModel *overlayViewModel; // @synthesize overlayViewModel=_overlayViewModel;
@property(readonly, copy, nonatomic) SCLensChallengesStoryItem *storyItem; // @synthesize storyItem=_storyItem;

@end

