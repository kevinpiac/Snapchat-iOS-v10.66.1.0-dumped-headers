//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCStoriesSnapPlaybackCreatorInfo;

@interface SCStoriesSnapPlaybackRepostAttribution : NSObject <NSCopying>
{
    SCStoriesSnapPlaybackCreatorInfo *_creator;
    long long _creatorType;
    NSString *_originalStoryId;
    NSDate *_originalPostDate;
    long long _visibility;
    NSString *_logoUrl;
    NSString *_editionId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCStoriesSnapPlaybackCreatorInfo *creator; // @synthesize creator=_creator;
@property(readonly, nonatomic) long long creatorType; // @synthesize creatorType=_creatorType;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
- (unsigned long long)hash;
- (id)initWithCreator:(id)arg1 creatorType:(long long)arg2 originalStoryId:(id)arg3 originalPostDate:(id)arg4 visibility:(long long)arg5 logoUrl:(id)arg6 editionId:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, copy, nonatomic) NSDate *originalPostDate; // @synthesize originalPostDate=_originalPostDate;
@property(readonly, copy, nonatomic) NSString *originalStoryId; // @synthesize originalStoryId=_originalStoryId;
@property(readonly, nonatomic) long long visibility; // @synthesize visibility=_visibility;

@end
