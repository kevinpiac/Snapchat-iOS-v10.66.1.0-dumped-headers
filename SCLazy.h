//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLazy : NSObject
{
    id _target;
    CDUnknownBlockType _initializationBlock;
    _Bool _isAutoCreation;
    _Bool _targetCreated;
}

+ (id)automaticCreationWithInitializationBlock:(CDUnknownBlockType)arg1;
+ (id)manualCreationWithInitializationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)createNow;
- (id)initWithInitializationBlock:(CDUnknownBlockType)arg1 isAutoCreation:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isCreated;
- (id)target;

@end
