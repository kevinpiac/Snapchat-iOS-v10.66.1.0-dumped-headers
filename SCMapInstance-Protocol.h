//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCMapConfiguration, SCMapCustomGLRenderer, SCMapGestures, SCMapLoadingState, SCMapScreenshotProvider, SCMapViewport;

@protocol SCMapInstance <NSObject>
@property(readonly, nonatomic) id <SCMapConfiguration> mapConfiguration;
@property(readonly, nonatomic) id <SCMapCustomGLRenderer> mapCustomGLRenderer;
@property(readonly, nonatomic) id <SCMapGestures> mapGestures;
@property(readonly, nonatomic) id <SCMapLoadingState> mapLoadingState;
@property(readonly, nonatomic) id <SCMapScreenshotProvider> mapScreenshotProvider;
@property(readonly, nonatomic) id <SCMapViewport> mapViewport;
- (void)setGeocodedPlaceName:(NSString *)arg1;
- (void)setShowsAttributionButton:(_Bool)arg1;
@end
