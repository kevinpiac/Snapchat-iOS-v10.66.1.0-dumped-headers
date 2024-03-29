//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMapStoryThumbnail;

@interface SCMapExploreStatusCarouselThumbnailViewModel : NSObject <NSCopying>
{
    SCMapStoryThumbnail *_storyThumbnail;
    NSString *_storyId;
    NSString *_emoji;
    NSArray *_people;
}

+ (id)viewModelWithItem:(id)arg1 mapPeopleFriendsProvider:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (unsigned long long)hash;
- (id)initWithStoryThumbnail:(id)arg1 storyId:(id)arg2 emoji:(id)arg3 people:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) SCMapStoryThumbnail *storyThumbnail; // @synthesize storyThumbnail=_storyThumbnail;

@end

