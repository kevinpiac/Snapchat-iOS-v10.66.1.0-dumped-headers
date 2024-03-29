//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, SCGrowingButton, SCMapLocationSettingsButton, UILabel;
@protocol SCMapExplorerHeaderViewDelegate;

@interface SCMapExplorerHeaderView : UIView
{
    UILabel *_titleLabel;
    CALayer *_lineLayer;
    id <SCMapExplorerHeaderViewDelegate> _delegate;
    SCGrowingButton *_closeButton;
    SCMapLocationSettingsButton *_locationSettingsButton;
}

+ (id)_titleLabelTextAttributes;
- (void).cxx_destruct;
- (void)_didTapCloseButton;
- (void)_didTapShareLocation;
@property(readonly, nonatomic) SCGrowingButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <SCMapExplorerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SCMapLocationSettingsButton *locationSettingsButton; // @synthesize locationSettingsButton=_locationSettingsButton;
@property(copy, nonatomic) NSString *title;

@end

