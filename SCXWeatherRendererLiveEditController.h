//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCXWeather;

@interface SCXWeatherRendererLiveEditController : NSObject
{
    _Bool _liveEditReloadInProgress;
    double _lastLiveEditReloadTime;
    SCXWeather *_liveEditWeather;
}

+ (void)_getLiveReloadDataAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadImageWithHost:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_updateLiveReloadWeatherWithJson:(id)arg1 host:(id)arg2;
@property(retain) SCXWeather *liveEditWeather; // @synthesize liveEditWeather=_liveEditWeather;
- (void)refreshLiveWeatherIfNecessaryWithHost:(id)arg1;

@end

