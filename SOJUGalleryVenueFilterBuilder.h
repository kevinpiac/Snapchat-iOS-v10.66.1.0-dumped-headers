//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryVenueFilterBuilder : NSObject
{
    NSNumber *_yOffset;
    NSArray *_venues;
    NSString *_selectedVenueId;
}

+ (id)withJUGalleryVenueFilter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setSelectedVenueId:(id)arg1;
- (id)setVenues:(id)arg1;
- (id)setYOffset:(id)arg1;
- (id)setYOffsetValue:(double)arg1;

@end

