//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol SCCreativePreviewScanResultProtocol;

@interface SCScanResultNavigationController : UINavigationController
{
    id <SCCreativePreviewScanResultProtocol> _creativePreviewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCCreativePreviewScanResultProtocol> creativePreviewDelegate; // @synthesize creativePreviewDelegate=_creativePreviewDelegate;
- (void)didReceiveMemoryWarning;
- (void)dismissPresentingCreativePreview;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldDisplayStatusBar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

