//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface _FBKVOSharedController : NSObject
{
    NSHashTable *_infos;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void)observe:(id)arg1 info:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unobserve:(id)arg1 info:(id)arg2;
- (void)unobserve:(id)arg1 infos:(id)arg2;

@end

