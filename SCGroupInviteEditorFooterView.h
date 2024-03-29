//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGroupInviteEditorFooterViewButton, SCGrowingButton, UILabel;
@protocol SCGroupInviteEditorFooterViewDelegate;

@interface SCGroupInviteEditorFooterView : UIView
{
    UILabel *_moreDetailsLabel;
    SCGrowingButton *_doneButton;
    SCGroupInviteEditorFooterViewButton *_locationButton;
    SCGroupInviteEditorFooterViewButton *_timeButton;
    _Bool _showsLocationAndTimeButtons;
    id <SCGroupInviteEditorFooterViewDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
- (void)_tappedDone;
@property(nonatomic) __weak id <SCGroupInviteEditorFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool showsLocationAndTimeButtons; // @synthesize showsLocationAndTimeButtons=_showsLocationAndTimeButtons;

@end

