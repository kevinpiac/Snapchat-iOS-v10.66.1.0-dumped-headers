//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNetworkImage;
@protocol NSCopying><NSCoding;

@interface SCLensExplorerChallengesSnapBuilder : NSObject
{
    NSObject<NSCopying><NSCoding> *_discoverFeedStory;
    unsigned long long _storyDedupeFp;
    _Bool _isFullyViewed;
    _Bool _isSubscribed;
    SCNetworkImage *_imageThumbnail;
}

+ (id)lensExplorerChallengesSnap;
+ (id)lensExplorerChallengesSnapFromExistingLensExplorerChallengesSnap:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withDiscoverFeedStory:(id)arg1;
- (id)withImageThumbnail:(id)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withIsSubscribed:(_Bool)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;

@end

