//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

@class UIImageView, UILabel;

@interface SCMissCallChatTableViewCell : SCMessageChatTableViewCell
{
    UILabel *_missCallNotificationLabel;
    UIImageView *_missedCallIcon;
    _Bool _isAnimating;
}

- (void).cxx_destruct;
- (void)animateIcon;
- (void)animateLabelVisibilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
- (id)missCallViewModel;
- (void)renderMetadata;
- (void)renderPayload;
- (void)setIconFinalState;
- (void)setIconInitialState;
- (void)updateIconContraintsWithRightOffset:(double)arg1;
- (void)updateLabelContraintsWithCenterXOffset:(double)arg1 andTopOffset:(double)arg2;

@end
