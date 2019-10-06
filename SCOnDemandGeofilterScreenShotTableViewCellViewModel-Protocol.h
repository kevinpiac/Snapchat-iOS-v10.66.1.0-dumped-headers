//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, NSURL, SOJUUnlockablesOndemandGeofence, UIColor, UIImage;

@protocol SCOnDemandGeofilterScreenShotTableViewCellViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double cellHeight;
@property(readonly, nonatomic) double cellWidth;
@property(readonly, nonatomic) _Bool enableActivityIndicator;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandGeofence *geofence;
@property(readonly, copy, nonatomic) UIColor *statusColor;
@property(readonly, copy, nonatomic) NSString *statusContent;
@property(readonly, copy, nonatomic) UIImage *thumbNail;
@property(readonly, copy, nonatomic) NSURL *thumbNailURL;
@end

