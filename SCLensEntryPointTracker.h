//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSString;

@interface SCLensEntryPointTracker : NSObject <SCTraceEnabled>
{
    unsigned long long _defaultEntryPoint;
    NSString *_activeLensId;
    NSMutableArray *_entryPointsStack;
}

- (void).cxx_destruct;
- (void)activateLensIfNeeded:(id)arg1 withEntryPoint:(unsigned long long)arg2;
- (id)init;
- (id)initWithDefaultEntryPoint:(unsigned long long)arg1;
- (unsigned long long)popEntryPoint;
- (void)pushEntryPoint:(unsigned long long)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

