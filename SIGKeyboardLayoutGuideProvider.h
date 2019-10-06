//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, UILayoutGuide, UIView;

@interface SIGKeyboardLayoutGuideProvider : NSObject
{
    NSLayoutConstraint *_keyboardHeightInFrameConstraint;
    double _lastKnownKeyboardHeightInFrame;
    UILayoutGuide *_keyboardLayoutGuide;
    NSArray *_constraints;
    _Bool _enabled;
    UIView *_view;
    NSLayoutYAxisAnchor *_keyboardAnchor;
}

- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)installInView:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *keyboardAnchor; // @synthesize keyboardAnchor=_keyboardAnchor;
- (void)uninstall;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;

@end
