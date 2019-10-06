//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCGalleryProfile <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *lastBackupNotificationTime;
@property(readonly, copy, nonatomic) NSDate *lastFeaturedStorySyncTime;
@property(readonly, copy, nonatomic) NSDate *lastFullSyncTime;
@property(readonly, nonatomic) long long lastUpdateSeqNum;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) int snapTotalQuota;
@property(readonly, copy, nonatomic) NSString *syncToken;
@property(readonly, copy, nonatomic) NSString *userId;
@end

