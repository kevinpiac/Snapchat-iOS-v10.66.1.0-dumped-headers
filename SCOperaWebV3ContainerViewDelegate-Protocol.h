//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SCOperaWebV3ContainerView;

@protocol SCOperaWebV3ContainerViewDelegate <NSObject>
- (void)didCloseWebView:(SCOperaWebV3ContainerView *)arg1;
- (void)didOpenActionMenu:(SCOperaWebV3ContainerView *)arg1;
- (void)didShareURL:(NSURL *)arg1 webContainerView:(SCOperaWebV3ContainerView *)arg2;
@end
