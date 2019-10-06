//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEmbeddedStaticMapGenerator-Protocol.h"

@class NSString, NSURLSessionDataTask, SCMapBitmojiAvatarGenerator, SCMapboxStaticMapInfoProvider;

@interface SCEmbeddedMapManager : NSObject <SCEmbeddedStaticMapGenerator>
{
    struct CGRect _frame;
    NSURLSessionDataTask *_task;
    SCMapBitmojiAvatarGenerator *_mapBitmojiAvatarGenerator;
    SCMapboxStaticMapInfoProvider *_mapboxStaticMapInfoProvider;
    _Bool _ghostMode;
}

- (void).cxx_destruct;
- (void)_addBitmojiAvatarViewToMapView:(id)arg1 forPersonLocation:(id)arg2;
- (struct CLLocationCoordinate2D)_adjustedStaticMapCoordinateFromPersonCoordinate:(struct CLLocationCoordinate2D)arg1 forZoomLevel:(double)arg2;
- (struct CGRect)_bitmojiAvatarViewFrameWithAspectRatio:(double)arg1;
- (id)_buildStaticMapRequestWithAccessToken:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3;
- (id)_personImageViewForNoAvatarForPersonLocation:(id)arg1;
- (void)staticMapViewWithFrame:(struct CGRect)arg1 personLocation:(id)arg2 ghostMode:(_Bool)arg3 zoomLevel:(double)arg4 mapBitmojiAvatarGenerator:(id)arg5 mapboxStaticMapInfoProvider:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
