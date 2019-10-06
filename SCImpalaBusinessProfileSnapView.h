//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCImpalaBusinessProfileCardViewHolder-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSURL, SCImpalaBusinessProfileCardView, SCStoryManifest, UIImageView;
@protocol SCImpalaBusinessProfileSnapViewDelegate;

@interface SCImpalaBusinessProfileSnapView : UIView <UIGestureRecognizerDelegate, SCImpalaBusinessProfileCardViewHolder>
{
    UIImageView *_thumbnailView;
    NSURL *_previousImageURL;
    id <SCImpalaBusinessProfileSnapViewDelegate> _delegate;
    SCImpalaBusinessProfileCardView *_businessProfileCardView;
    SCStoryManifest *_storyManifest;
}

- (void).cxx_destruct;
- (void)_didTapToPlayStoryManifest;
@property(readonly, nonatomic) SCImpalaBusinessProfileCardView *businessProfileCardView; // @synthesize businessProfileCardView=_businessProfileCardView;
@property(nonatomic) __weak id <SCImpalaBusinessProfileSnapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCStoryManifest *storyManifest; // @synthesize storyManifest=_storyManifest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

