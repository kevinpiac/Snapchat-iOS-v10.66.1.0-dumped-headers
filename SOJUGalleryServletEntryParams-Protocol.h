//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUGalleryServletEntryParams <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *createTime;
@property(readonly, copy, nonatomic) NSNumber *deleteAllShared;
@property(readonly, copy, nonatomic) NSString *entryId;
@property(readonly, copy, nonatomic) NSNumber *entrySource;
@property(readonly, copy, nonatomic) NSNumber *entryType;
@property(readonly, copy, nonatomic) NSString *externalId;
@property(readonly, copy, nonatomic) NSArray *highlightedSnapIds;
@property(readonly, copy, nonatomic) NSNumber *isPrivate;
@property(readonly, copy, nonatomic) NSNumber *lastAutosaveTime;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSArray *snapIds;
@property(readonly, copy, nonatomic) NSArray *snapOperations;
@property(readonly, copy, nonatomic) NSArray *snapsUploadInfo;
@property(readonly, copy, nonatomic) NSString *title;
@end

