//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentitySuggestedFriendDisplayInformation-Protocol.h"

@class NSString;

@interface SOJUIdentitySuggestedFriendDisplayInformation : NSObject <SOJUIdentitySuggestedFriendDisplayInformation>
{
    NSString *_userId;
    NSString *_suggestionSubtext;
    NSString *_suggestionToken;
    NSString *_suggestionSubtextLowercase;
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
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUserId:(id)arg1 suggestionSubtext:(id)arg2 suggestionToken:(id)arg3 suggestionSubtextLowercase:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *suggestionSubtext; // @synthesize suggestionSubtext=_suggestionSubtext;
@property(readonly, copy, nonatomic) NSString *suggestionSubtextLowercase; // @synthesize suggestionSubtextLowercase=_suggestionSubtextLowercase;
@property(readonly, copy, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
