//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface SCOnDemandGeofilterMapboxItem : NSObject
{
    CLLocation *_location;
    NSString *_localName;
    NSString *_countyName;
    NSString *_stateName;
    NSString *_countryName;
}

+ (id)parseMapboxItemBasedOnFeatureResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countyName; // @synthesize countyName=_countyName;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;

@end

