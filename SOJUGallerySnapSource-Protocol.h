//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUSnapCreatorAttribution;

@protocol SOJUGallerySnapSource <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *attribution;
@property(readonly, copy, nonatomic) NSString *cameraRollId;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *creatorAttribution;
@property(readonly, copy, nonatomic) NSString *externalId;
@property(readonly, copy, nonatomic) NSString *saverUserId;
@property(readonly, copy, nonatomic) NSNumber *type;
@end

