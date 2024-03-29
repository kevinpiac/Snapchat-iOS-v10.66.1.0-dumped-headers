//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSArray, NSString, SCGrowingButton, SCLoadingIndicatorView, SCOperaActionMenuHeaderView, UIButton, UIImageView;

@interface SCOperaActionMenuLayerView : UIView <SCOperaLayerView>
{
    UIImageView *_gradientView;
    _Bool _shouldShowSendButton;
    _Bool _shouldShowSubtitlesButton;
    NSArray *_actionButtons;
    SCGrowingButton *_loadingSendButton;
    _Bool _shouldShowLoadingSendButton;
    SCLoadingIndicatorView *_loadingSendButtonLoadingIndicator;
    struct CGRect _contentFrame;
    SCOperaActionMenuHeaderView *_header;
    SCGrowingButton *_sendButton;
    UIButton *_editButton;
    UIButton *_reportButton;
    UIButton *_deleteButton;
    UIButton *_saveButton;
    UIButton *_infoButton;
    UIButton *_subtitlesButton;
    UIView *_blurOverlayView;
    UIView *_overlayContentView;
    double _visiblePercent;
}

+ (id)displayNameColor;
+ (id)headerColor;
+ (id)layerViewWithFrame:(struct CGRect)arg1;
+ (id)usernameColor;
- (void).cxx_destruct;
- (id)_actionButtonWithImageName:(id)arg1 width:(double)arg2 height:(double)arg3;
- (id)_buttonForType:(long long)arg1;
- (void)_setVisiblePercent:(double)arg1 contentFrame:(struct CGRect)arg2 animationDuration:(double)arg3 animationOptions:(unsigned long long)arg4;
- (void)_setupActionButtons;
- (void)_setupButtonForButtonType:(long long)arg1;
- (void)_setupButtonsWithLayer:(id)arg1;
- (void)_setupGradient;
- (void)_setupHeaderWithLayer:(id)arg1;
- (void)_setupLoadingSendButton;
- (void)_setupSendButton;
- (_Bool)_shouldShowDeleteButton;
- (_Bool)_shouldShowEditButton;
- (_Bool)_shouldShowInfoButton;
- (_Bool)_shouldShowReportButton;
- (_Bool)_shouldShowSaveButton;
- (_Bool)_shouldshowGradient;
@property(readonly, nonatomic) UIView *blurOverlayView; // @synthesize blurOverlayView=_blurOverlayView;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(readonly, nonatomic) SCOperaActionMenuHeaderView *header; // @synthesize header=_header;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (_Bool)isVisible;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(readonly, nonatomic) SCGrowingButton *sendButton; // @synthesize sendButton=_sendButton;
- (void)setBrowserButtonVisible:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 contentFrame:(struct CGRect)arg2 animationDuration:(double)arg3 animationOptions:(unsigned long long)arg4;
- (void)setVisiblePercent:(double)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)setupViewForLayer:(id)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
@property(readonly, nonatomic) UIButton *subtitlesButton; // @synthesize subtitlesButton=_subtitlesButton;
- (void)updateURL:(id)arg1;
@property(readonly, nonatomic) double visiblePercent; // @synthesize visiblePercent=_visiblePercent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

