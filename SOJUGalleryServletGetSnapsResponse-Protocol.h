//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUGalleryServletBaseResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@protocol SOJUGalleryServletGetSnapsResponse <NSObject, NSCoding, NSCopying, SOJUGalleryServletBaseResponse>
@property(readonly, copy, nonatomic) NSNumber *backoffTime;
@property(readonly, copy, nonatomic) NSString *debugInfo;
@property(readonly, copy, nonatomic) SOJUGalleryServletQuota *quota;
@property(readonly, copy, nonatomic) NSNumber *serviceStatusCode;
@property(readonly, copy, nonatomic) NSArray *snaps;
@property(readonly, copy, nonatomic) NSNumber *totalEntryCount;
@property(readonly, copy, nonatomic) NSString *userString;
@end
