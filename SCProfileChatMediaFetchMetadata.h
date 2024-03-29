//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCProfileChatMediaFetchMetadata : SCDocObject <NSCopying>
{
    NSString *_ownerIdentifier;
    NSString *_checksum;
    NSArray *_paginationSequenceNumber;
    unsigned long long _expirationTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)_fromMap:(id)arg1;
- (id)_toMap:(id)arg1;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (unsigned long long)hash;
- (id)initWithOwnerIdentifier:(id)arg1 checksum:(id)arg2 paginationSeqNumMap:(id)arg3 expirationTimestamp:(unsigned long long)arg4;
- (id)initWithOwnerIdentifier:(id)arg1 checksum:(id)arg2 paginationSequenceNumber:(id)arg3 expirationTimestamp:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (id)paginationSeqNumMap;
@property(readonly, copy, nonatomic) NSArray *paginationSequenceNumber; // @synthesize paginationSequenceNumber=_paginationSequenceNumber;

@end

