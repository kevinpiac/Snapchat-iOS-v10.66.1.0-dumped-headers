//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SCPlayerManager : NSObject
{
    NSHashTable *_allocatedPlayers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerPlayer:(id)arg1;
- (void)removePlayer:(id)arg1;
- (id)snapshot;
- (void)stopAllPlayers;

@end

