//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSSet;

@protocol SCLocationManagerState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool allowsBackground;
@property(readonly, nonatomic) double locationAccuracy;
@property(readonly, copy, nonatomic) NSSet *observingBeaconRegions;
@property(readonly, nonatomic) _Bool updatingHeading;
@property(readonly, nonatomic) _Bool updatingLocation;
@end

