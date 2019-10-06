//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class SCLoadingIndicatorView, UIImageView, UILabel, UIView;
@protocol SCGalleryStoriesPrototypeTabHeaderViewDelegate;

@interface SCGalleryStoriesPrototypeTabHeaderView : UICollectionReusableView
{
    UILabel *_label;
    UIView *_tweaksButton;
    UIImageView *_doneIcon;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCGalleryStoriesPrototypeTabHeaderViewDelegate> _delegate;
}

+ (double)headerHeight;
- (void).cxx_destruct;
- (void)_didTapTweaks:(id)arg1;
@property(nonatomic) __weak id <SCGalleryStoriesPrototypeTabHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateInProgress:(_Bool)arg1 count:(unsigned long long)arg2;

@end

