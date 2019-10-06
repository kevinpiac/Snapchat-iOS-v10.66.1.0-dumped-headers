//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterCountryPickerViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCRegisterCountryPickerView;
@protocol SCCountryCodeViewControllerDelegate;

@interface SCCountryCodeViewController : UIViewController <SCRegisterCountryPickerViewDelegate>
{
    SCRegisterCountryPickerView *_countryPickerView;
    NSString *_countryCode;
    NSDictionary *_context;
    id <SCCountryCodeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_pageNameForPageView;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (void)leftCountryPickerButtonPressedWithCountryCode:(id)arg1;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end
