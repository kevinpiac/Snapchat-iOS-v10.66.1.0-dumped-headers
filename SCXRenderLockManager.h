//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol SCXRenderLockManagerDelegate;

@interface SCXRenderLockManager : NSObject
{
    NSHashTable *_locks;
    id <SCXRenderLockManagerDelegate> _delegate;
    long long _effectiveLockType;
}

- (void).cxx_destruct;
- (void)_updateEffectiveLockType;
- (id)acquireLockWithType:(long long)arg1;
@property(nonatomic) __weak id <SCXRenderLockManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long effectiveLockType; // @synthesize effectiveLockType=_effectiveLockType;
- (id)init;
- (void)releaseLock:(id)arg1;

@end

