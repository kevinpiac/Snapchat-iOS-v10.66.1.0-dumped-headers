//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, SCGIEventDetailsUpdatedChatMessagePayload, UILabel;

@interface SCGroupInviteUpdateMessageCard : UIView
{
    NSDictionary *_statusMessageAttributes;
    UILabel *_statusLabel;
    UIView *_cardBorder;
    NSMutableArray *_aspectTextLabels;
    NSMutableArray *_aspectIcons;
    SCGIEventDetailsUpdatedChatMessagePayload *_messagePayload;
    CDUnknownBlockType _onTap;
}

+ (double)heightWithPayload:(id)arg1;
- (void).cxx_destruct;
- (void)_tapped;
- (id)initWithStatusMessageAttributes:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCGIEventDetailsUpdatedChatMessagePayload *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

