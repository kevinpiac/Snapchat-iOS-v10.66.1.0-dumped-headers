//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGallerySendConfiguration-Protocol.h"

@class NSArray, NSString, SCStoriesPostingConfiguration;

@interface SCGallerySendConfiguration : NSObject <SCGallerySendConfiguration>
{
    NSArray *_recipientUsernames;
    SCStoriesPostingConfiguration *_storiesConfiguration;
    NSArray *_businessIds;
    NSArray *_mischiefs;
    NSString *_additionalText;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientUsernames:(id)arg1 storiesConfiguration:(id)arg2 businessIds:(id)arg3 mischiefs:(id)arg4 additionalText:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *mischiefs; // @synthesize mischiefs=_mischiefs;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames; // @synthesize recipientUsernames=_recipientUsernames;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SCStoriesPostingConfiguration *storiesConfiguration; // @synthesize storiesConfiguration=_storiesConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

