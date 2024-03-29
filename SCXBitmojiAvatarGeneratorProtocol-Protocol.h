//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCXBitmojiAvatarGeneratorProtocol <NSObject>
+ (NSString *)imageIdentifierForBitmojiAvatarId:(NSString *)arg1 bitmojiStickerId:(NSString *)arg2;
+ (NSString *)imageIdentifierForBitmojiAvatarId:(NSString *)arg1 bitmojiStickerId:(NSString *)arg2 stickerDynamicElements:(NSArray *)arg3 clustered:(_Bool)arg4;
- (void)fetchBitmojiImageForBitmojiAvatarId:(NSString *)arg1 bitmojiStickerId:(NSString *)arg2 stickerDynamicElements:(NSArray *)arg3 clustered:(_Bool)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(UIImage *, NSError *))arg6;
- (void)prefetchBitmojiImageForBitmojiAvatarId:(NSString *)arg1 bitmojiStickerId:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(void))arg4;
@end

