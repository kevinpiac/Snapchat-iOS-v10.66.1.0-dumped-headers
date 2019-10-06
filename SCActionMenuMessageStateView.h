//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, SCMessageChatViewModel, SCPieView, UIImageView, UILabel;

@interface SCActionMenuMessageStateView : UIView
{
    UIView *_messageStateHolder;
    UILabel *_messageStateLabel;
    _Bool _shouldShowMessageState;
    UIImageView *_checkIcon;
    SCPieView *_pieView;
    SCMessageChatViewModel *_messageViewModel;
    NSAttributedString *_messageState;
}

- (void).cxx_destruct;
- (void)_updateViewPadding;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSAttributedString *messageState; // @synthesize messageState=_messageState;
@property(retain, nonatomic) SCMessageChatViewModel *messageViewModel; // @synthesize messageViewModel=_messageViewModel;
- (void)setupSeenByView;

@end
