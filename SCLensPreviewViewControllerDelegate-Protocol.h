//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCLens, SCLensConfiguration, SCLensInPreviewViewController;

@protocol SCLensPreviewViewControllerDelegate
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 didSelectLens:(SCLens *)arg2 configuration:(SCLensConfiguration *)arg3;
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 showSpinner:(_Bool)arg2;
- (void)lensPreviewViewController:(SCLensInPreviewViewController *)arg1 updateLensAppliedImageWithLens:(SCLens *)arg2;
@end

