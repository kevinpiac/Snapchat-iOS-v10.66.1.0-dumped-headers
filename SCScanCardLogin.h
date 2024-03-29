//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class NSString, SCScanCardButton, SCUserSession, UIActivityIndicatorView, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SCScanCardLogin : SCScanCardTableViewCell
{
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    SCScanCardButton *_openButton;
    UIButton *_cancelButton;
    UIButton *_shareButton;
    UIView *_secondaryHeader;
    NSString *_scanData;
    UIActivityIndicatorView *_buttonIndicator;
    double _totalCardHeight;
    UIColor *_iconBackgroundColor;
    UIImage *_logoImage;
    SCUserSession *_userSession;
    NSString *_clientId;
    NSString *_scannableId;
    int _version;
}

- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)_didTapHeader;
- (void)_didTapOpenButton;
- (void)_updatePreferredSize;
- (id)initWithClientId:(id)arg1 logo:(id)arg2 title:(id)arg3 scanData:(id)arg4 scannableId:(id)arg5 version:(int)arg6 userSession:(id)arg7;
- (void)loadData;
- (void)stopLoadingProgress;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)updateStyle;

@end

