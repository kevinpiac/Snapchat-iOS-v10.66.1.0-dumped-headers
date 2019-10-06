//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache;

@interface SCMediaCardCache : NSObject
{
    SCCache *_oldCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_fetchFromOldCacheWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateDataForKey:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containsImageKey:(id)arg1;
- (id)init;
- (void)mediaCardImageDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMediaCardImageData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
