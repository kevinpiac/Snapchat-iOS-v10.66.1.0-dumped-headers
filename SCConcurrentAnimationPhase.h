//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAnimationPhase-Protocol.h"

@class NSArray, NSString;

@interface SCConcurrentAnimationPhase : NSObject <SCAnimationPhase>
{
    NSArray *_phases;
}

+ (id)concurrentPhaseWithPhases:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPhases:(id)arg1;
- (void)performAnimationsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
