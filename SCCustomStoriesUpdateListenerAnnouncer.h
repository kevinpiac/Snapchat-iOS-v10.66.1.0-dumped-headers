//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesUpdateListener-Protocol.h"

@interface SCCustomStoriesUpdateListenerAnnouncer : NSObject <SCCustomStoriesUpdateListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCCustomStoriesUpdateListener>, std::__1::allocator<__weak id<SCCustomStoriesUpdateListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (id)description;
- (void)didUpdateCustomStoriesWithPublicationIds:(id)arg1;
- (void)removeListener:(id)arg1;

@end

