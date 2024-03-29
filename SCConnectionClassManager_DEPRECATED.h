//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCConnectionClassManagerListenerAnnouncer;

@interface SCConnectionClassManager_DEPRECATED : NSObject
{
    double _hysteresisTopMultiplier;
    double _hysteresisBottomMultiplier;
    long long _nextBandwidthConnectionClass;
    unsigned long long _sampleCounter;
    _Bool _initiateStateChange;
    SCConnectionClassManagerListenerAnnouncer *_announcer;
    long long _currentBandwidthClass;
}

+ (id)shared;
- (void).cxx_destruct;
- (long long)_getBandwidthClass:(long long)arg1;
- (_Bool)_significantlyOutsideCurrentClass:(long long)arg1;
- (void)addListener:(id)arg1;
@property long long currentBandwidthClass; // @synthesize currentBandwidthClass=_currentBandwidthClass;
- (void)didUpdateBandwidth:(long long)arg1;
- (id)init;
- (void)removeListener:(id)arg1;

@end

