//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3ELMShrinkTarget-Protocol.h"

@class NSString;

@interface SCTV3ELMShrinkTargetAdapter : NSObject <SCTV3ELMShrinkTarget>
{
    CDUnknownBlockType _measureBlock;
    CDUnknownBlockType _reattachBlock;
}

- (void).cxx_destruct;
- (id)initWithMeasureBlock:(CDUnknownBlockType)arg1 reattachBlock:(CDUnknownBlockType)arg2;
- (void)reattachLocalMediaViewAfterShrinking;
- (id)shrunkLocalMediaMeasurements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

