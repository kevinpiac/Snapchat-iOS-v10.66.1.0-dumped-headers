//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFilterBase-Protocol.h"

@class NSString, SCFilterBaseAnalytics;

@interface SCExponentialGeometricFilter : NSObject <SCFilterBase>
{
    unsigned long long _sampleCountCutover;
    SCFilterBaseAnalytics *_filterBaseAnalytics;
    _Bool _includeInitialValueInFiltering;
    _Bool _isUnderestimate;
    double _filteredValue;
    unsigned long long _sampleCount;
    double _filterCoefficient;
}

- (void).cxx_destruct;
- (void)filterAnalyticsDictionaryWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) double filterCoefficient; // @synthesize filterCoefficient=_filterCoefficient;
@property(nonatomic) double filteredValue; // @synthesize filteredValue=_filteredValue;
@property(nonatomic) _Bool includeInitialValueInFiltering; // @synthesize includeInitialValueInFiltering=_includeInitialValueInFiltering;
- (id)initWithFilterCoefficient:(double)arg1 initialValue:(double)arg2 includeInitialValueInFiltering:(_Bool)arg3;
@property(nonatomic) _Bool isUnderestimate; // @synthesize isUnderestimate=_isUnderestimate;
- (void)performFilteringWithNewSample:(double)arg1;
- (void)reset;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

