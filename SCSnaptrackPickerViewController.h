//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCSnaptracksServices;
@protocol SCSnaptrackPickerViewControllerDelegate;

@interface SCSnaptrackPickerViewController : UIViewController
{
    id <SCSnaptrackPickerViewControllerDelegate> _delegate;
    SCSnaptracksServices *_snaptracksServices;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCSnaptrackPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithContentFrame:(struct CGRect)arg1 cornerRadius:(double)arg2;
@property(nonatomic) __weak SCSnaptracksServices *snaptracksServices; // @synthesize snaptracksServices=_snaptracksServices;

@end

