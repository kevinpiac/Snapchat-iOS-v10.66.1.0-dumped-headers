//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUGetSavedMessagesByTypesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *checksum;
@property(readonly, copy, nonatomic) NSDictionary *iterSequenceNumber;
@property(readonly, copy, nonatomic) NSArray *messages;
@property(readonly, copy, nonatomic) NSNumber *notModified;
@end

