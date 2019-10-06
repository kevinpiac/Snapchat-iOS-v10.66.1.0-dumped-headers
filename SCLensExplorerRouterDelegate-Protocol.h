//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, SCLensExplorerPresentationConfiguration, SCReplyParameters;
@protocol SCLensExplorerRouting;

@protocol SCLensExplorerRouterDelegate <NSObject>
- (void)lensExplorerRouter:(id <SCLensExplorerRouting>)arg1 didRequestToUpdateSelectLensAfterUnlock:(SCLens *)arg2;
- (void)lensExplorerRouterBeginDismissHalfHeightLensFeed:(id <SCLensExplorerRouting>)arg1;
- (void)lensExplorerRouterBeginDismissingLensExplorer:(id <SCLensExplorerRouting>)arg1;
- (void)lensExplorerRouterDidDismissLensExplorer:(id <SCLensExplorerRouting>)arg1;
- (void)lensExplorerRouterDidPresentHalfHeightLensFeed:(id <SCLensExplorerRouting>)arg1;
- (void)lensExplorerRouterDidPresentLensExplorer:(id <SCLensExplorerRouting>)arg1;
- (void)lensExplorerRouterDidRequestToPresentLensExplorer:(id <SCLensExplorerRouting>)arg1 configuration:(SCLensExplorerPresentationConfiguration *)arg2;
- (void)lensExplorerRouterDidToggleCamera:(id <SCLensExplorerRouting>)arg1;
- (SCReplyParameters *)lensExplorerRouterReplyParametersForCameraPresenter:(id <SCLensExplorerRouting>)arg1;
@end

