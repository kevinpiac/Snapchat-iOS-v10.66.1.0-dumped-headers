//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCColorPickerDelegate-Protocol.h"
#import "SCDrawingDelegate-Protocol.h"

@class NSString, SCColorPicker, SCDrawingButton, SCDrawingView, SCGradientView, SCGrowingButton, UIImage, UIImageView, UIView;
@protocol SCBugReportDrawOnAttachmentViewControllerDelegate;

@interface SCBugReportDrawOnAttachmentViewController : UIViewController <SCColorPickerDelegate, SCDrawingDelegate>
{
    id <SCBugReportDrawOnAttachmentViewControllerDelegate> _delegate;
    UIImage *_originalImage;
    UIImageView *_originalImageView;
    SCDrawingView *_drawingView;
    SCGrowingButton *_xButton;
    UIView *_iconsContainerView;
    SCColorPicker *_colorPicker;
    SCDrawingButton *_drawingButton;
    SCGrowingButton *_trashButton;
    SCGradientView *_topGradient;
    SCGradientView *_bottomGradient;
    SCGrowingButton *_checkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
- (void)cancelButtonPressed;
@property(retain, nonatomic) SCGrowingButton *checkButton; // @synthesize checkButton=_checkButton;
- (struct CGRect)checkButtonFrame;
- (void)colorChanged:(id)arg1;
@property(retain, nonatomic) SCColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
- (struct CGRect)colorPickerFrame;
- (void)deleteButtonPressed;
- (void)didAlterDrawing;
- (void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)didPinchBrush;
- (void)didStartDrawing;
- (void)discardButtonPressed;
- (void)dismissViewController:(_Bool)arg1;
@property(retain, nonatomic) SCDrawingButton *drawingButton; // @synthesize drawingButton=_drawingButton;
- (struct CGRect)drawingButtonFrame;
- (void)drawingEnabled:(_Bool)arg1;
- (void)drawingPress:(id)arg1;
@property(retain, nonatomic) SCDrawingView *drawingView; // @synthesize drawingView=_drawingView;
@property(retain, nonatomic) UIView *iconsContainerView; // @synthesize iconsContainerView=_iconsContainerView;
- (void)initColorPicker;
- (id)initWithImage:(id)arg1;
- (void)layoutGrowingButton:(id)arg1 withButtonFrame:(struct CGRect)arg2;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)prepareEditImage;
- (void)saveButtonPressed;
- (void)setActionButtonsForDrawingHidden:(_Bool)arg1;
- (void)setEditAttachmentDelegate:(id)arg1;
@property(retain, nonatomic) SCGradientView *topGradient; // @synthesize topGradient=_topGradient;
@property(retain, nonatomic) SCGrowingButton *trashButton; // @synthesize trashButton=_trashButton;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
- (void)setupGradients;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGRect)trashButtonFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

