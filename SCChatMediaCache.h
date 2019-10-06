//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCCache;

@interface SCChatMediaCache : NSObject
{
    id <SCCache> _cache;
}

- (void).cxx_destruct;
- (_Bool)contains:(id)arg1;
- (id)initWithEncryptionKeyManagerGetterBlock:(CDUnknownBlockType)arg1;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 resetExpirationWithInterval:(double)arg2 whenLessThanDelta:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeAllObjectsFromMemory;
- (void)removeObjectWithKeys:(id)arg1;
- (void)setChatMediaObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setChatMediaObject:(id)arg1 forKey:(id)arg2 expirationIntervalFromNow:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end
