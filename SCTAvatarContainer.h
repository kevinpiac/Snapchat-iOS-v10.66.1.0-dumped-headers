//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTAvatarContainer-Protocol.h"

@class NSString, UIImage;

@interface SCTAvatarContainer : NSObject <SCTAvatarContainer>
{
    UIImage *_bitmojiHead;
    UIImage *_bitmojiHands;
    UIImage *_bitmojiTypingBody;
    UIImage *_bitmojiTypingArm;
    NSString *_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *bitmojiHands; // @synthesize bitmojiHands=_bitmojiHands;
@property(retain, nonatomic) UIImage *bitmojiHead; // @synthesize bitmojiHead=_bitmojiHead;
@property(retain, nonatomic) UIImage *bitmojiTypingArm; // @synthesize bitmojiTypingArm=_bitmojiTypingArm;
@property(retain, nonatomic) UIImage *bitmojiTypingBody; // @synthesize bitmojiTypingBody=_bitmojiTypingBody;
- (_Bool)hasAllImages;
- (void)setImage:(id)arg1 forCatalogEntry:(long long)arg2;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

