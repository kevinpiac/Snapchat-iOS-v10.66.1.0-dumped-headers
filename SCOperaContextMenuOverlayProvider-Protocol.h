//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCContextSnapViewMetrics, SCOperaContextMenuLayerViewController, SCOperaViewController, UIView, UIViewController;
@protocol SCContextPresenting, SCSizeChangeAnnouncingView;

@protocol SCOperaContextMenuOverlayProvider <NSObject>
- (void)contextLayerWillFullyAppear:(SCOperaContextMenuLayerViewController *)arg1;
- (id <SCContextPresenting>)contextMenuControllerWithLayerViewController:(SCOperaContextMenuLayerViewController *)arg1;
- (SCContextSnapViewMetrics *)currentSnapViewMetricsWithLayerViewController:(SCOperaContextMenuLayerViewController *)arg1;
- (UIView<SCSizeChangeAnnouncingView> *)customCtaViewWithLayerViewController:(SCOperaContextMenuLayerViewController *)arg1;
- (void)prepareContextMenuWithProperties:(NSDictionary *)arg1;
- (void)prepareToPresentContextMenu:(UIViewController *)arg1;
- (void)setupWithOperaViewController:(SCOperaViewController *)arg1;
- (_Bool)shouldAnimateTransition:(NSDictionary *)arg1;
@end
