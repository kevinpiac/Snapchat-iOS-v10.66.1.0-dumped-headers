//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCContributionStoryPublisherBuilder : NSObject
{
    NSString *_displayName;
    NSString *_subtext;
    NSString *_profileDescription;
    NSString *_thumbnailUrl;
    NSString *_userName;
    NSString *_cacheId;
    long long _loadState;
}

+ (id)withContributionStoryPublisher:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCacheId:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setLoadState:(long long)arg1;
- (id)setProfileDescription:(id)arg1;
- (id)setSubtext:(id)arg1;
- (id)setThumbnailUrl:(id)arg1;
- (id)setUserName:(id)arg1;

@end

