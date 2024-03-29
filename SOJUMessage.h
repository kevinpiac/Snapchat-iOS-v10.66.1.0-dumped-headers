//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUMessage-Protocol.h"

@class NSString;

@interface SOJUMessage : NSObject <SOJUMessage>
{
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
}

+ (_Bool)_shouldAutoRetryChatMessageWithUpdatedSequence:(id)arg1;
+ (_Bool)canInitFromProto;
+ (_Bool)canSupersedePriorMessages:(id)arg1;
+ (id)createMessageFromDictionary:(id)arg1;
+ (_Bool)expectsACKMessage:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)fillInMissingKnownChatSequenceNumberForOneOnOneChatMessage:(id)arg1;
+ (long long)imageOrientationFromSojuSnapOrientation:(long long)arg1;
+ (_Bool)isPresenceMessage:(id)arg1;
+ (_Bool)isV3Message:(id)arg1;
+ (_Bool)message:(id)arg1 supersedesPriorMessage:(id)arg2;
+ (_Bool)shouldAutoRetryMessageWithUpdatedSequence:(id)arg1;
+ (_Bool)shouldAutoRetryWithoutUpdatingSequence:(id)arg1;
+ (_Bool)shouldShowNetworkActivity:(id)arg1;
+ (long long)sojuSnapOrientationFromUIImageOrientation:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

