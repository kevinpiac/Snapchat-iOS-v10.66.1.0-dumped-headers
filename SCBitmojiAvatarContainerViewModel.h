//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCBitmojiAvatarViewModel;

@interface SCBitmojiAvatarContainerViewModel : NSObject <NSCopying>
{
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    NSArray *_groupBitmojiAvatarViewModels;
    SCBitmojiAvatarViewModel *_bitmojiAccessoryAvatarViewModel;
    unsigned long long _bitmojiAccessoryAvatarViewTypingAnimationState;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCBitmojiAvatarViewModel *bitmojiAccessoryAvatarViewModel; // @synthesize bitmojiAccessoryAvatarViewModel=_bitmojiAccessoryAvatarViewModel;
@property(readonly, nonatomic) unsigned long long bitmojiAccessoryAvatarViewTypingAnimationState; // @synthesize bitmojiAccessoryAvatarViewTypingAnimationState=_bitmojiAccessoryAvatarViewTypingAnimationState;
@property(readonly, copy, nonatomic) SCBitmojiAvatarViewModel *bitmojiAvatarViewModel; // @synthesize bitmojiAvatarViewModel=_bitmojiAvatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *groupBitmojiAvatarViewModels; // @synthesize groupBitmojiAvatarViewModels=_groupBitmojiAvatarViewModels;
- (unsigned long long)hash;
- (id)initWithBitmojiAvatarViewModel:(id)arg1 groupBitmojiAvatarViewModels:(id)arg2 bitmojiAccessoryAvatarViewModel:(id)arg3 bitmojiAccessoryAvatarViewTypingAnimationState:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;

@end
