//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStoryLogbook-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUStory, SOJUStoryExtra;

@interface SOJUStoryLogbook : NSObject <SOJUStoryLogbook>
{
    SOJUStory *_story;
    SOJUStoryExtra *_storyExtras;
    SOJUStoryExtra *_friendStoryExtras;
    SOJUStoryExtra *_otherStoryExtras;
    NSNumber *_engagementPercentage;
    NSNumber *_intendedPostTime;
    NSArray *_storyNotes;
    NSArray *_friendStoryNotes;
    NSArray *_otherStoryNotes;
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
@property(readonly, copy, nonatomic) NSNumber *engagementPercentage; // @synthesize engagementPercentage=_engagementPercentage;
- (int)engagementPercentageValue;
@property(readonly, copy, nonatomic) SOJUStoryExtra *friendStoryExtras; // @synthesize friendStoryExtras=_friendStoryExtras;
@property(readonly, copy, nonatomic) NSArray *friendStoryNotes; // @synthesize friendStoryNotes=_friendStoryNotes;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStory:(id)arg1 storyExtras:(id)arg2 friendStoryExtras:(id)arg3 otherStoryExtras:(id)arg4 engagementPercentage:(id)arg5 intendedPostTime:(id)arg6 storyNotes:(id)arg7 friendStoryNotes:(id)arg8 otherStoryNotes:(id)arg9;
@property(readonly, copy, nonatomic) NSNumber *intendedPostTime; // @synthesize intendedPostTime=_intendedPostTime;
- (long long)intendedPostTimeValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUStoryExtra *otherStoryExtras; // @synthesize otherStoryExtras=_otherStoryExtras;
@property(readonly, copy, nonatomic) NSArray *otherStoryNotes; // @synthesize otherStoryNotes=_otherStoryNotes;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUStory *story; // @synthesize story=_story;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras; // @synthesize storyExtras=_storyExtras;
@property(readonly, copy, nonatomic) NSArray *storyNotes; // @synthesize storyNotes=_storyNotes;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

