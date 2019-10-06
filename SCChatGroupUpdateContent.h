//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatGroupUpdateContent-Protocol.h"

@class NSArray, NSString;

@interface SCChatGroupUpdateContent : NSObject <SCChatGroupUpdateContent>
{
    NSString *_modifiedBy;
    NSString *_groupName;
    NSArray *_modifiedParticipants;
    long long _type;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModifiedBy:(id)arg1 groupName:(id)arg2 modifiedParticipants:(id)arg3 type:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(readonly, copy, nonatomic) NSArray *modifiedParticipants; // @synthesize modifiedParticipants=_modifiedParticipants;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

