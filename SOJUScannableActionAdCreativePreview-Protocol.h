//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUScannableAction-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUScannableActionAdCreativePreview <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSNumber *createdTimestampInMillis;
@property(readonly, copy, nonatomic) NSString *entityId;
@property(readonly, copy, nonatomic) NSString *entityType;
@property(readonly, copy, nonatomic) NSNumber *isActionExpirable;
@property(readonly, copy, nonatomic) NSNumber *ttlInMillis;
@end

