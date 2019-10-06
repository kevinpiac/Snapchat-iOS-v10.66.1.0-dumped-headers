//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCLensExplorerBaseDataStoreItem-Protocol.h"

@class NSString, NSURL, SCLensExplorerChallengesSnap, SCLensExplorerLensItemLoggingInfo, UIColor;
@protocol NSObject><NSCopying;

@interface SCLensChallengesStoryItem : NSObject <SCLensExplorerBaseDataStoreItem, NSCopying, NSCoding>
{
    _Bool _isSubscribable;
    SCLensExplorerChallengesSnap *_lensExplorerChallengesSnap;
    NSString *_storyId;
    NSURL *_coverURL;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiAvatarSelfieId;
    NSString *_author;
    UIColor *_color;
    SCLensExplorerLensItemLoggingInfo *_loggingInfo;
    NSString *_challengeId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) NSString *challengeId; // @synthesize challengeId=_challengeId;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSURL *coverURL; // @synthesize coverURL=_coverURL;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSObject><NSCopying> identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLensExplorerChallengesSnap:(id)arg1 storyId:(id)arg2 coverURL:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiAvatarSelfieId:(id)arg5 author:(id)arg6 color:(id)arg7 isSubscribable:(_Bool)arg8 loggingInfo:(id)arg9 challengeId:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSubscribable; // @synthesize isSubscribable=_isSubscribable;
@property(readonly, copy, nonatomic) SCLensExplorerChallengesSnap *lensExplorerChallengesSnap; // @synthesize lensExplorerChallengesSnap=_lensExplorerChallengesSnap;
@property(readonly, copy, nonatomic) SCLensExplorerLensItemLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
