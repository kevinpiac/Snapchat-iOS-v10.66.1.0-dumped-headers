//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatUFSDeltaInformation-Protocol.h"

@class NSDictionary, NSString;

@interface SCChatUFSDeltaInformation : NSObject <SCChatUFSDeltaInformation>
{
    NSDictionary *_groupDeltas;
    NSDictionary *_oneOnOneChatDeltas;
    NSDictionary *_oneOnOneSnapDeltas;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *groupDeltas; // @synthesize groupDeltas=_groupDeltas;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupDeltas:(id)arg1 oneOnOneChatDeltas:(id)arg2 oneOnOneSnapDeltas:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *oneOnOneChatDeltas; // @synthesize oneOnOneChatDeltas=_oneOnOneChatDeltas;
@property(readonly, copy, nonatomic) NSDictionary *oneOnOneSnapDeltas; // @synthesize oneOnOneSnapDeltas=_oneOnOneSnapDeltas;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
