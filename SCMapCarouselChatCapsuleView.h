//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface SCMapCarouselChatCapsuleView : UIButton
{
    UILabel *_chatLabel;
    UIImageView *_chatIcon;
    _Bool _unreadState;
}

- (void).cxx_destruct;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) _Bool unreadState; // @synthesize unreadState=_unreadState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

