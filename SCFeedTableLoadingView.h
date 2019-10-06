//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedLoadingViewProtocol-Protocol.h"

@class FLAnimatedImageView, NSString, SCLazy, UILabel, UITapGestureRecognizer;
@protocol SCFeedTableLoadingViewDelegate;

@interface SCFeedTableLoadingView : UIView <SCFeedLoadingViewProtocol>
{
    SCLazy *_friendsFeedLoadingStatusManager;
    _Bool _isOnscreen;
    _Bool _boxHidden;
    id <SCFeedTableLoadingViewDelegate> _delegate;
    UILabel *_label;
    unsigned long long _labelConstraintsType;
    FLAnimatedImageView *_rotatingSnapBox;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)textColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool boxHidden; // @synthesize boxHidden=_boxHidden;
@property(nonatomic) __weak id <SCFeedTableLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTap:(id)arg1;
- (void)initRotatingSnapBox;
- (id)initWithFriendsFeedLoadingStatusManager:(id)arg1;
@property(nonatomic) _Bool isOnscreen; // @synthesize isOnscreen=_isOnscreen;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long labelConstraintsType; // @synthesize labelConstraintsType=_labelConstraintsType;
@property(retain, nonatomic) FLAnimatedImageView *rotatingSnapBox; // @synthesize rotatingSnapBox=_rotatingSnapBox;
- (void)setRotatingSnapBoxHidden:(_Bool)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)updateLabelConstraintsWithType:(unsigned long long)arg1;
- (void)updateViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
