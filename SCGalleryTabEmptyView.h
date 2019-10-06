//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCMemoriesRoundButton, UILabel;
@protocol SCGalleryTabEmptyViewDelegate;

@interface SCGalleryTabEmptyView : UIView
{
    UIView *_containerView;
    UIView *_labelsContainer;
    UILabel *_placeholderTitle;
    UILabel *_placeholderDesc;
    SCMemoriesRoundButton *_actionButton;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCGalleryTabEmptyViewDelegate> _delegate;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (void)_actionButtonTapped;
@property(nonatomic) __weak id <SCGalleryTabEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

