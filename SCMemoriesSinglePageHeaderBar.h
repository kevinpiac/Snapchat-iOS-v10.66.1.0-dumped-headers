//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGradientView.h"

@class NSString, SCExpandedButton, UILabel, UIView;
@protocol SCMemoriesSinglePageHeaderBarDelegate;

@interface SCMemoriesSinglePageHeaderBar : SCGradientView
{
    unsigned long long _type;
    id <SCMemoriesSinglePageHeaderBarDelegate> _delegate;
    NSString *_title;
    UIView *_containerView;
    SCExpandedButton *_backButton;
    UILabel *_titleLabel;
    SCExpandedButton *_selectButton;
}

+ (double)height;
- (void).cxx_destruct;
- (void)_didPressBackButton;
- (void)_didPressSelectButton;
@property(retain, nonatomic) SCExpandedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCMemoriesSinglePageHeaderBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) SCExpandedButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

