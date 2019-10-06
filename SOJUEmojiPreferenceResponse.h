//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUEmojiPreferenceResponse-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUEmojiPreferenceResponse : NSObject <SOJUEmojiPreferenceResponse>
{
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSNumber *_success;
    NSDictionary *_friendmojiDictionary;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiDictionary; // @synthesize friendmojiDictionary=_friendmojiDictionary;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3 success:(id)arg4 friendmojiDictionary:(id)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *success; // @synthesize success=_success;
- (_Bool)successValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

