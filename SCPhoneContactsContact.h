//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPhoneContactsContact : SCDocObject <NSCopying>
{
    NSString *_phoneNumberHash;
    NSString *_displayName;
    double _modificationTimestamp;
    double _addressBookEditionTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, nonatomic) double addressBookEditionTimestamp; // @synthesize addressBookEditionTimestamp=_addressBookEditionTimestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithPhoneNumberHash:(id)arg1 displayName:(id)arg2 modificationTimestamp:(double)arg3 addressBookEditionTimestamp:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double modificationTimestamp; // @synthesize modificationTimestamp=_modificationTimestamp;
@property(readonly, copy, nonatomic) NSString *phoneNumberHash; // @synthesize phoneNumberHash=_phoneNumberHash;

@end

