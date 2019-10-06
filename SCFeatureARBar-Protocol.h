//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeatureCameraBottomUIContender-Protocol.h"

@protocol SCARBarCompatibleFeature, SCFeatureARBarDelegate;

@protocol SCFeatureARBar <SCFeatureCameraBottomUIContender>
- (id <SCARBarCompatibleFeature>)activeFeature;
@property(nonatomic) long long cameraViewType;
@property(nonatomic) __weak id <SCFeatureARBarDelegate> delegate;
@property(readonly, nonatomic) _Bool enabled;
- (void)prepareToRestore;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 haptics:(_Bool)arg3;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateVisibility:(double)arg1;
@end
