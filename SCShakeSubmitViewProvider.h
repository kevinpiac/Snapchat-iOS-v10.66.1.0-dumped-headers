//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCButton, SCShakeSeparatorView, UIView;
@protocol SCShakeSubmitDelegate;

@interface SCShakeSubmitViewProvider : NSObject
{
    _Bool _enabled;
    id <SCShakeSubmitDelegate> _delegate;
    SCShakeSeparatorView *_footerSeparator;
    SCButton *_submitButton;
    UIView *_submitButtonContainer;
}

- (void).cxx_destruct;
- (void)_submitClicked:(id)arg1;
@property(nonatomic) __weak id <SCShakeSubmitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableSubmitButton:(_Bool)arg1;
@property(retain, nonatomic) SCShakeSeparatorView *footerSeparator; // @synthesize footerSeparator=_footerSeparator;
- (void)hideSubmitButton:(_Bool)arg1;
- (id)initWithSize:(unsigned long long)arg1;
@property(retain, nonatomic) SCButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIView *submitButtonContainer; // @synthesize submitButtonContainer=_submitButtonContainer;

@end

