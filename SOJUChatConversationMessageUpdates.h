//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatConversationMessageUpdates-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUChatConversationMessageUpdates : NSObject <SOJUChatConversationMessageUpdates>
{
    NSArray *_messageUpdatesDeprecated;
    NSArray *_stateMessages;
    NSArray *_preservationMessages;
    NSNumber *_hasMore;
    NSArray *_eraseMessages;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *eraseMessages; // @synthesize eraseMessages=_eraseMessages;
@property(readonly, copy, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
- (_Bool)hasMoreValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMessageUpdatesDeprecated:(id)arg1 stateMessages:(id)arg2 preservationMessages:(id)arg3 hasMore:(id)arg4 eraseMessages:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messageUpdatesDeprecated; // @synthesize messageUpdatesDeprecated=_messageUpdatesDeprecated;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *preservationMessages; // @synthesize preservationMessages=_preservationMessages;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *stateMessages; // @synthesize stateMessages=_stateMessages;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

