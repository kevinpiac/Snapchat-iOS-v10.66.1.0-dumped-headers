//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@interface SCLSIDebugInfoMetadata : SCComposerMarshallableObject
{
    double _pfeLat;
    double _clientLat;
    double _numLenses;
    double _numFallbacks;
}

@property(nonatomic) double clientLat; // @synthesize clientLat=_clientLat;
- (id)initWithPfeLat:(double)arg1 clientLat:(double)arg2 numLenses:(double)arg3 numFallbacks:(double)arg4;
@property(nonatomic) double numFallbacks; // @synthesize numFallbacks=_numFallbacks;
@property(nonatomic) double numLenses; // @synthesize numLenses=_numLenses;
@property(nonatomic) double pfeLat; // @synthesize pfeLat=_pfeLat;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end
