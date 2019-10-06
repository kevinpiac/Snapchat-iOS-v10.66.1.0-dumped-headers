//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureLensSideButtonUpdateProviderImplementation-Protocol.h"

@class NSString, SCLens;
@protocol SCFeatureLensSideButtonUpdateProviderImplementation;

@interface SCFeatureLensSideButtonUpdateProvider : NSObject <SCFeatureLensSideButtonUpdateProviderImplementation>
{
    id <SCFeatureLensSideButtonUpdateProviderImplementation> _implementation;
}

- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, nonatomic) SCLens *firstApplicableLens;
- (id)initWithRegistry:(id)arg1 lensSideButtonDelegate:(id)arg2 userSession:(id)arg3;
- (void)lensesTurnedOff;
- (void)lensesTurnedOn;
@property(readonly, nonatomic) _Bool newLensesAvailable;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
