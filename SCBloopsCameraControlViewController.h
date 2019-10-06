//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCLoadingIndicatorView, UIButton, UILabel;
@protocol SCBloopsCameraControlViewControllerDelegate;

@interface SCBloopsCameraControlViewController : UIViewController
{
    unsigned long long _cameraControlState;
    id <SCBloopsCameraControlViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_firstTipLabel;
    UILabel *_secondTipLabel;
    UIButton *_closeButton;
    UIButton *_switchCameraButton;
    UIButton *_takePhotoCameraButton;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)_initialSetup;
@property(nonatomic) unsigned long long cameraControlState; // @synthesize cameraControlState=_cameraControlState;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <SCBloopsCameraControlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapSwitchCameraButton:(id)arg1;
- (void)didTapTakePhotoButton:(id)arg1;
@property(retain, nonatomic) UILabel *firstTipLabel; // @synthesize firstTipLabel=_firstTipLabel;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UILabel *secondTipLabel; // @synthesize secondTipLabel=_secondTipLabel;
@property(retain, nonatomic) UIButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) UIButton *takePhotoCameraButton; // @synthesize takePhotoCameraButton=_takePhotoCameraButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)viewDidLoad;

@end

