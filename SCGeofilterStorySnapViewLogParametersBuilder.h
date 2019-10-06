//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCGeofilterStorySnapViewLogParametersBuilder : NSObject
{
    NSString *_storySnapId;
    long long _mediaType;
    NSString *_encFilterGeofilterId;
    NSString *_encFilterGeolensId;
    NSString *_filterGeofilterId;
    NSArray *_filterGeofilterIds;
    NSString *_filterGeolensId;
    NSString *_stickerPackUnlockableIdList;
    NSString *_encGeoData;
    NSString *_unlockablesSnapInfo;
    long long _exitReason;
    long long _viewSource;
    double _snapTimeViewed;
    double _duration;
    _Bool _isDurationInfinite;
}

+ (id)geofilterStorySnapViewLogParameters;
+ (id)geofilterStorySnapViewLogParametersFromExistingGeofilterStorySnapViewLogParameters:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withDuration:(double)arg1;
- (id)withEncFilterGeofilterId:(id)arg1;
- (id)withEncFilterGeolensId:(id)arg1;
- (id)withEncGeoData:(id)arg1;
- (id)withExitReason:(long long)arg1;
- (id)withFilterGeofilterId:(id)arg1;
- (id)withFilterGeofilterIds:(id)arg1;
- (id)withFilterGeolensId:(id)arg1;
- (id)withIsDurationInfinite:(_Bool)arg1;
- (id)withMediaType:(long long)arg1;
- (id)withSnapTimeViewed:(double)arg1;
- (id)withStickerPackUnlockableIdList:(id)arg1;
- (id)withStorySnapId:(id)arg1;
- (id)withUnlockablesSnapInfo:(id)arg1;
- (id)withViewSource:(long long)arg1;

@end

