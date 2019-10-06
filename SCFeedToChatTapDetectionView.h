//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer;
@protocol SCFeedToChatTapDetectionViewDelegate;

@interface SCFeedToChatTapDetectionView : UIView
{
    UITapGestureRecognizer *_tapGesture;
    id <SCFeedToChatTapDetectionViewDelegate> _delegate;
    struct CGPoint _previousTapLocation;
}

- (void).cxx_destruct;
- (void)cleanAndRemoveFromSuperView;
- (void)dealloc;
@property(nonatomic) __weak id <SCFeedToChatTapDetectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)presentInView:(id)arg1;
@property(nonatomic) struct CGPoint previousTapLocation; // @synthesize previousTapLocation=_previousTapLocation;
- (void)tap:(id)arg1;

@end
