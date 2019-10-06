//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCFriendsFeedAnimationHandler, UIColor, UIView;
@protocol SCFeedComponentViewDelegate, SCFeedComponentViewModel, SCImageDownloading;

@protocol SCFeedComponentBaseView
@property(retain, nonatomic) SCFriendsFeedAnimationHandler *animationHandler;
@property(nonatomic) __weak id <SCFeedComponentViewDelegate> delegate;
- (UIView *)dismissFeedIconView;
- (UIView *)feedIconView;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader;
- (UIView *)leftIconView;
- (UIView *)operaBaseView;
- (void)prepareForReuse;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 delayed:(_Bool)arg3;
@property(retain, nonatomic) id <SCFeedComponentViewModel> viewModel;
- (void)updateFriendMojiView;
@end

