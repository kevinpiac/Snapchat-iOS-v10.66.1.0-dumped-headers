//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LSABitmojiEffectListener <NSObject>
- (void)didRequestBitmojiAvatarId;
- (void)didRequestBitmojiInfo;
- (void)didRequestBitmojiWithId:(NSString *)arg1 avatarId:(NSString *)arg2 friendAvatarId:(NSString *)arg3 stickerType:(int)arg4 scale:(long long)arg5;
- (void)didRequestBitmojiWithId:(NSString *)arg1 avatarId:(NSString *)arg2 stickerType:(int)arg3 scale:(long long)arg4;
- (void)didRequestBitmojiWithId:(NSString *)arg1 stickerType:(int)arg2 scale:(long long)arg3;
- (void)didRequestMegapack:(NSString *)arg1;
@end
