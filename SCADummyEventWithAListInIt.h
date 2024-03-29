//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSArray, NSNumber, SCADummyConcreteClassWithAListInIt;

@interface SCADummyEventWithAListInIt : SCAUserNotTrackedEvent
{
    NSNumber *dummyScalarValue;
    SCADummyConcreteClassWithAListInIt *structWithList;
    NSArray *listOfScalarValues;
    NSArray *listOfStructs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDummyScalarValue;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getListOfScalarValues;
- (id)getListOfStructs;
- (double)getPerUserSamplingRate;
- (id)getStructWithList;
- (void)setDummyScalarValue:(long long)arg1;
- (void)setListOfScalarValues:(id)arg1;
- (void)setListOfStructs:(id)arg1;
- (void)setStructWithList:(id)arg1;

@end

