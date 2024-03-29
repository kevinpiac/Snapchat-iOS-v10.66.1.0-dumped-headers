//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL, SCLensResource;

@protocol SCLensCacheMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *cacheDomain;
@property(readonly, copy, nonatomic) NSString *cacheKey;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *lensID;
@property(readonly, copy, nonatomic) NSString *requestTrackingType;
@property(readonly, copy, nonatomic) SCLensResource *resource;
@property(readonly, copy, nonatomic) NSURL *sourceURL;
@end

