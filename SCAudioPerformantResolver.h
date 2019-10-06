//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioResolver-Protocol.h"

@class NSMutableOrderedSet, NSString, SCAudioConfiguration;
@protocol SCProximityStatus;

@interface SCAudioPerformantResolver : NSObject <SCAudioResolver>
{
    SCAudioConfiguration *_activeConfiguration;
    NSMutableOrderedSet *_setOfConfigurations;
    SCAudioConfiguration *_defaultAmbientConfiguration;
    id <SCProximityStatus> _proximityStatus;
}

- (void).cxx_destruct;
- (id)_buildConfiguration:(id)arg1 withProximityState:(_Bool)arg2;
- (id)_chooseActiveConfiguration;
- (id)configurationDebugInfo;
- (id)getCurrentResolvedConfiguration;
- (id)initWithProximityStatus:(id)arg1;
@property(retain, nonatomic) id <SCProximityStatus> proximityStatus; // @synthesize proximityStatus=_proximityStatus;
- (id)relinquishConfiguration:(id)arg1;
- (id)resolveConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
