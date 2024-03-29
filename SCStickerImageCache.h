//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCStickerDataCache;

@interface SCStickerImageCache : NSObject
{
    SCStickerDataCache *_cache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCStickerDataCache *cache; // @synthesize cache=_cache;
- (id)init;
- (id)initWithCache:(id)arg1;
- (void)removeStickerImageDataForKey:(id)arg1;
- (void)reset;
- (void)setStickerImageData:(id)arg1 forKey:(id)arg2 expirationPeriod:(double)arg3;
- (void)stickerImageForKey:(id)arg1 expirationPeriod:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerImageForKey:(id)arg1 expirationPeriod:(double)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

