//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol SCMapInstance;

@interface SCGroupStoryMapView : UIView
{
    UIView<SCMapInstance> *_mapView;
    UIImageView *_radiusView;
}

- (void).cxx_destruct;
- (void)_setupRadiusViewTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2 tintColor:(id)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 hideRadiusView:(_Bool)arg2;

@end

