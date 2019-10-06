//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSURL, SCMapOnDemandContentManager, SCXRenderLayer;
@protocol SCMapWorldEffectManagerDelegate;

@interface SCMapWorldEffectManager : NSObject
{
    SCMapOnDemandContentManager *_downloadableContentManager;
    SCXRenderLayer *_mapRenderLayer;
    NSMutableDictionary *_worldEffectsBySource;
    NSURL *_currentWorldEffectURL;
    NSMutableSet *_playedEffectURLs;
    _Bool _isClusterSelected;
    double _currentZoomLevel;
    id <SCMapWorldEffectManagerDelegate> _delegate;
}

+ (void)_fetchEffectWithURL:(id)arg1 downloadableContentManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_activateHighestPriorityWorldEffect;
- (void)_updateEffectFromTweak;
@property(nonatomic) double currentZoomLevel; // @synthesize currentZoomLevel=_currentZoomLevel;
@property(nonatomic) __weak id <SCMapWorldEffectManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDownloadableContentManager:(id)arg1 mapRenderLayer:(id)arg2;
@property(nonatomic) _Bool isClusterSelected; // @synthesize isClusterSelected=_isClusterSelected;
- (void)preloadEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAndClearAnimations;
- (void)updateEffect:(id)arg1 fromSource:(long long)arg2;

@end
