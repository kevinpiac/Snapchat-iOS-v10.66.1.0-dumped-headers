//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCUnlockableSwipeInteraction.h"

@class NSDate, NSString;

@interface SCUnlockableGeoFilterSwipeInteraction : SCUnlockableSwipeInteraction
{
    NSDate *_firstSeenTimestamp;
    NSString *_encryptedGeoData;
    long long _geofilterType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(retain, nonatomic) NSDate *firstSeenTimestamp; // @synthesize firstSeenTimestamp=_firstSeenTimestamp;
@property(nonatomic) long long geofilterType; // @synthesize geofilterType=_geofilterType;

@end
