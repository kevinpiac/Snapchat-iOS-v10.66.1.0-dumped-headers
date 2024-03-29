//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaLayerViewController, SCOperaSharedResourceManager;
@protocol SCOperaLayer;

@protocol SCOperaLayerViewControllerFactory <NSObject>
+ (SCOperaLayerViewController *)layerViewControllerWithLayer:(id <SCOperaLayer>)arg1 configuration:(SCOperaConfiguration *)arg2 eventAnnouncer:(SCOperaEventListenerAnnouncer *)arg3 sharedResourceManager:(SCOperaSharedResourceManager *)arg4;
@end

