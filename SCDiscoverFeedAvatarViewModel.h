//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCBitmojiAvatarViewModel;

@interface SCDiscoverFeedAvatarViewModel : NSObject <NSCopying>
{
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    double _avatarTopPadding;
    long long _avatarContentMode;
    NSString *_backgroundImageName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long avatarContentMode; // @synthesize avatarContentMode=_avatarContentMode;
@property(readonly, nonatomic) double avatarTopPadding; // @synthesize avatarTopPadding=_avatarTopPadding;
@property(readonly, copy, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(readonly, copy, nonatomic) SCBitmojiAvatarViewModel *bitmojiAvatarViewModel; // @synthesize bitmojiAvatarViewModel=_bitmojiAvatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithBitmojiAvatarViewModel:(id)arg1 avatarTopPadding:(double)arg2 avatarContentMode:(long long)arg3 backgroundImageName:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end

