//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SCOperaRemoteWebLayerView;

@protocol SCOperaRemoteWebLayerViewDelegate <NSObject>
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (void)remoteWebLayerView:(SCOperaRemoteWebLayerView *)arg1 didShareURL:(NSURL *)arg2;
- (void)remoteWebLayerViewDidPressExitButton:(SCOperaRemoteWebLayerView *)arg1;
@end

