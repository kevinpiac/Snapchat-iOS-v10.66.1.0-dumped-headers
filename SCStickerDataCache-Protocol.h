//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSString;

@protocol SCStickerDataCache <NSObject>
- (void)removeAllStickerData;
- (void)removeStickerDataForKey:(NSString *)arg1;
- (void)setStickerData:(NSData *)arg1 forKey:(NSString *)arg2 expiration:(NSDate *)arg3;
- (void)stickerDataForKey:(NSString *)arg1 resetExpiration:(NSDate *)arg2 completion:(void (^)(NSString *, NSData *))arg3;
@end
