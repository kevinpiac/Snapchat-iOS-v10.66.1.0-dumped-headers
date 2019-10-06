//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityContactWithData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityContactWithData : NSObject <SOJUIdentityContactWithData>
{
    NSString *_number;
    NSString *_displayName;
    NSNumber *_lastUpdatedTimestamp;
    NSNumber *_timesContacted;
    NSNumber *_lastTimeContacted;
    NSNumber *_starred;
    NSString *_customRingtone;
    NSString *_photoId;
    NSString *_photoUri;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *customRingtone; // @synthesize customRingtone=_customRingtone;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithNumber:(id)arg1 displayName:(id)arg2 lastUpdatedTimestamp:(id)arg3 timesContacted:(id)arg4 lastTimeContacted:(id)arg5 starred:(id)arg6 customRingtone:(id)arg7 photoId:(id)arg8 photoUri:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastTimeContacted; // @synthesize lastTimeContacted=_lastTimeContacted;
- (long long)lastTimeContactedValue;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
- (long long)lastUpdatedTimestampValue;
@property(readonly, copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(readonly, copy, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
@property(readonly, copy, nonatomic) NSString *photoUri; // @synthesize photoUri=_photoUri;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *starred; // @synthesize starred=_starred;
- (int)starredValue;
@property(readonly, copy, nonatomic) NSNumber *timesContacted; // @synthesize timesContacted=_timesContacted;
- (int)timesContactedValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

