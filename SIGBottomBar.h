//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SIGBottomBar : UIView
{
    NSArray *_superviewLayoutConstraints;
    NSArray *_shownConstraints;
    NSArray *_hiddenConstraints;
    UIView *_contentView;
    _Bool _shown;
}

- (void).cxx_destruct;
- (void)applyShownConstraints;
- (void)didMoveToSuperview;
- (id)initWithContentView:(id)arg1;
@property(nonatomic, getter=isShown) _Bool shown; // @synthesize shown=_shown;
- (void)willMoveToSuperview:(id)arg1;

@end

