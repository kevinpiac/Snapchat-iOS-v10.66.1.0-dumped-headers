//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol SCRegisterBackButtonDelegate;

@interface SCRegisterV2BackButton : UIButton
{
    id <SCRegisterBackButtonDelegate> _delegate;
}

+ (id)initWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)backButtonPressed;

@end

