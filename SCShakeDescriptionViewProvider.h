//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITextView, UIView;
@protocol SCShakeDescriptionViewDelegate;

@interface SCShakeDescriptionViewProvider : NSObject <UITextViewDelegate>
{
    NSString *_placeholder;
    id <SCShakeDescriptionViewDelegate> _delegate;
    UIView *_textViewContainer;
    UITextView *_textView;
    UITextView *_textViewPlaceholder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCShakeDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getUserDescription;
- (void)highlightPlaceholder;
- (id)initWithPlaceholder:(id)arg1;
- (_Bool)isEmpty;
- (void)setDescriptionText:(id)arg1;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain, nonatomic) UITextView *textViewPlaceholder; // @synthesize textViewPlaceholder=_textViewPlaceholder;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
