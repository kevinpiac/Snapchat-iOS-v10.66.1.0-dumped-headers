//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCBitmojiStickerLibrary;

@interface SCBitmojiStickerRefresher : NSObject
{
    SCBitmojiStickerLibrary *_library;
}

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1;
- (id)refreshBitmojiSticker:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3;
- (id)refreshBitmojiStickers:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3;
- (id)refreshEncodedBitmojiId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3;

@end
