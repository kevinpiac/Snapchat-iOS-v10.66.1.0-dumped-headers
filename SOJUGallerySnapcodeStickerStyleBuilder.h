//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUGallerySnapcodeStickerStyleBuilder : NSObject
{
    NSString *_type;
    NSString *_username;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

+ (id)withJUGallerySnapcodeStickerStyle:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBitmojiAvatarId:(id)arg1;
- (id)setBitmojiSelfieId:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setUserId:(id)arg1;
- (id)setUsername:(id)arg1;

@end
