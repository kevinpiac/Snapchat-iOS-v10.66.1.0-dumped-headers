//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation;
@protocol SCGallerySnap;

@interface SCGalleryTakenNearbyGallerySnapItem : NSObject
{
    id <SCGallerySnap> _gallerySnap;
    CLLocation *_location;
    double _distance;
}

- (void).cxx_destruct;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;

@end

