//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSDictionary, NSString, UILabel, UITextView;
@protocol SCEventStickerMultilineInputFieldDelegate;

@interface SCEventStickerMultilineInputField : UIView <UITextViewDelegate>
{
    UILabel *_placeholder;
    UITextView *_textView;
    NSDictionary *_placeholderAttrs;
    NSDictionary *_attributes;
    id <SCEventStickerMultilineInputFieldDelegate> _delegate;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) __weak id <SCEventStickerMultilineInputFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusTextField;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAttributes:(id)arg1 extraPlaceholderAttributes:(id)arg2;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
- (void)resignTextFieldFocus;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

