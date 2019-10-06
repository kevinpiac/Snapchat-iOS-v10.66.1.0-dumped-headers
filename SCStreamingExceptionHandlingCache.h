//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingCaching-Protocol.h"

@class NSString;
@protocol SCStreamingCaching;

@interface SCStreamingExceptionHandlingCache : NSObject <SCStreamingCaching>
{
    id <SCStreamingCaching> _cache;
}

- (void).cxx_destruct;
- (id)initWithCache:(id)arg1;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

