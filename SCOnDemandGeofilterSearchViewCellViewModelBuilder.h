//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface SCOnDemandGeofilterSearchViewCellViewModelBuilder : NSObject
{
    NSString *_imageKey;
    NSAttributedString *_address;
    NSString *_region;
    NSString *_distance;
}

+ (id)withOnDemandGeofilterSearchViewCellViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAddress:(id)arg1;
- (id)setDistance:(id)arg1;
- (id)setImageKey:(id)arg1;
- (id)setRegion:(id)arg1;

@end
