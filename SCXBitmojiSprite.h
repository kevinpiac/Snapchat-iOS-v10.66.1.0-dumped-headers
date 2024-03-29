//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCXAnimatableTextureSprite.h"

@class NSString, SCMapBitmojiSticker, SCXSpeechBubbleSprite, SCXSprite, SCXSpriteTextureAnimator, UIColor;

@interface SCXBitmojiSprite : SCXAnimatableTextureSprite
{
    _Bool _clustered;
    _Bool _faded;
    NSString *_userId;
    NSString *_avatarId;
    SCMapBitmojiSticker *_sticker;
    UIColor *_missingBitmojiColor;
    unsigned long long _clusteredDirection;
    SCXSprite *_shadowSprite;
    SCXSpeechBubbleSprite *_speechBubbleSprite;
    SCXSpriteTextureAnimator *_textureAnimator;
    struct CGPoint _speechBubbleOffset;
}

- (void).cxx_destruct;
- (float)_desiredShadowSpriteOpacity;
- (CDUnknownBlockType)_newShadowWidthInterpolatorForWidthInterpolator:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_newSpeechBubbleWidthInterpolator;
- (CDUnknownBlockType)_shadowLocationForLocation:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_speechBubbleLocationInterpolatorForLocationInterpolator:(CDUnknownBlockType)arg1;
- (void)animateToLocationInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateToWidthInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(nonatomic) unsigned long long clusteredDirection; // @synthesize clusteredDirection=_clusteredDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)displaysGhostModeAvatar;
- (id)effectiveStickerId;
- (unsigned long long)hash;
- (id)init;
@property(nonatomic, getter=isClustered) _Bool clustered; // @synthesize clustered=_clustered;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, getter=isFaded) _Bool faded; // @synthesize faded=_faded;
@property(retain, nonatomic) UIColor *missingBitmojiColor; // @synthesize missingBitmojiColor=_missingBitmojiColor;
- (void)setLocationInterpolator:(CDUnknownBlockType)arg1;
- (void)setOpacity:(float)arg1;
@property(nonatomic) struct CGPoint speechBubbleOffset; // @synthesize speechBubbleOffset=_speechBubbleOffset;
@property(copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;
@property(retain, nonatomic) SCXSpriteTextureAnimator *textureAnimator; // @synthesize textureAnimator=_textureAnimator;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void)setWidthInterpolator:(CDUnknownBlockType)arg1;
- (void)setZIndex:(id)arg1;
@property(readonly, nonatomic) SCXSprite *shadowSprite; // @synthesize shadowSprite=_shadowSprite;
@property(readonly, nonatomic) SCXSpeechBubbleSprite *speechBubbleSprite; // @synthesize speechBubbleSprite=_speechBubbleSprite;
- (_Bool)textureRequiredForMapLoaded;
- (struct CGRect)touchRectInMapViewport:(id)arg1 view:(id)arg2;

@end

