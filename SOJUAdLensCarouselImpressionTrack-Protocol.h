//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdDeviceDeviceInfo, SOJUAdSnapCreationInfo;

@protocol SOJUAdLensCarouselImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *carouselSize;
@property(readonly, copy, nonatomic) SOJUAdDeviceDeviceInfo *deviceInfo;
@property(readonly, copy, nonatomic) NSArray *lensImpressions;
@property(readonly, copy, nonatomic) NSString *lensSessionId;
@property(readonly, copy, nonatomic) SOJUAdSnapCreationInfo *snapCreationInfo;
@end

