//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, SOJUStory, SOJUStoryExtra;

@protocol SOJUPartialStoryLogbook <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *engagementPercentage;
@property(readonly, copy, nonatomic) SOJUStoryExtra *friendStoryExtras;
@property(readonly, copy, nonatomic) NSNumber *intendedPostTime;
@property(readonly, copy, nonatomic) SOJUStoryExtra *otherStoryExtras;
@property(readonly, copy, nonatomic) SOJUStory *story;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras;
@end

