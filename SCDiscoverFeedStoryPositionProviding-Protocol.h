//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDiscoverFeedSectionKey, SCDiscoverFeedStory;

@protocol SCDiscoverFeedStoryPositionProviding <NSObject>
- (unsigned long long)itemIndexForStory:(SCDiscoverFeedStory *)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForSectionKey:(SCDiscoverFeedSectionKey *)arg1;
@end
