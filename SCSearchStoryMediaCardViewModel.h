//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMediaCardViewModel.h"

@class SCSearchDynamicStory;

@interface SCSearchStoryMediaCardViewModel : SCMediaCardViewModel
{
    SCSearchDynamicStory *_searchDynamicStory;
}

- (void).cxx_destruct;
- (id)defaultThumbnailImage;
- (id)initWithDisplayText:(id)arg1 dynamicStory:(id)arg2;
- (_Bool)isCircularThumbnail;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) SCSearchDynamicStory *searchDynamicStory; // @synthesize searchDynamicStory=_searchDynamicStory;
- (long long)type;

@end

