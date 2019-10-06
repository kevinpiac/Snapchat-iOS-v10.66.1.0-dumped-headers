//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UITextField;

@interface SIGTextFieldRightView : UIView
{
    UITextField *_textField;
    long long _clearButtonMode;
    UIControl *_clearButton;
    UIView *_accessoryView;
}

- (void).cxx_destruct;
- (void)_assertValidOptions;
- (long long)_impliedRightViewMode;
- (void)_updateState;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIControl *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;

@end
