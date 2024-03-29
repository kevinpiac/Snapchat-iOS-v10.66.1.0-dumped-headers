//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIButton, UIView;
@protocol SCPromptFilterViewDelegate;

@interface SCPromptFilterView : SCOverlayFilterView
{
    id <SCPromptFilterViewDelegate> _delegate;
    UIView *_promptOverlayContainerView;
    UIButton *_turnOnFiltersButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCPromptFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (_Bool)hasImage;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
@property(retain, nonatomic) UIView *promptOverlayContainerView; // @synthesize promptOverlayContainerView=_promptOverlayContainerView;
@property(retain, nonatomic) UIButton *turnOnFiltersButton; // @synthesize turnOnFiltersButton=_turnOnFiltersButton;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (void)turnOnFiltersButtonPressed;

@end

