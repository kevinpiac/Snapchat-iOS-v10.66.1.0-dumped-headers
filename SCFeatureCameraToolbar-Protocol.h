//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCCameraToolbarItem, SCNavigationBarButtonItem, SCNavigationItemView, UIView;
@protocol SCFeatureCameraToolbarDelegate;

@protocol SCFeatureCameraToolbar
- (void)addToolbarItem:(SCCameraToolbarItem *)arg1;
- (void)collapseToolbarAnimated:(_Bool)arg1;
@property(nonatomic) __weak id <SCFeatureCameraToolbarDelegate> delegate;
- (void)expandToolbarAnimated:(_Bool)arg1;
- (void)hideToolbarItem:(SCCameraToolbarItem *)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
- (_Bool)isItemHidden:(SCCameraToolbarItem *)arg1;
@property(readonly, nonatomic) SCNavigationBarButtonItem *passthroughButtonItem;
- (void)reloadToolbar:(_Bool)arg1;
- (void)removeToolbarItem:(SCCameraToolbarItem *)arg1;
- (void)setAllItemsHidden:(_Bool)arg1 includingAlwaysShowItems:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setToolbarItem:(SCCameraToolbarItem *)arg1 selected:(_Bool)arg2;
- (void)showToolbarItem:(SCCameraToolbarItem *)arg1 animated:(_Bool)arg2;
- (void)startIntroAnimationWithActivationMethod:(unsigned long long)arg1;
- (void)stopIntroAnimation;
@property(readonly, nonatomic) UIView *toolbarView;
- (void)transitionWithNavigationItemView:(SCNavigationItemView *)arg1;
- (void)updateToolbarPositionAnimated:(_Bool)arg1 duration:(double)arg2;
- (UIView *)viewForToolbarItem:(SCCameraToolbarItem *)arg1;
@end

