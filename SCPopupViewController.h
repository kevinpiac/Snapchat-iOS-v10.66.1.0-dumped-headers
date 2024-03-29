//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface SCPopupViewController : UIViewController
{
    UIView *_backgroundTint;
    UIViewController *_popup;
    double _widthRatio;
    double _heightRatio;
}

- (void).cxx_destruct;
- (void)addSubViewPushAnimation:(id)arg1;
@property(retain, nonatomic) UIView *backgroundTint; // @synthesize backgroundTint=_backgroundTint;
- (void)dismissPopupViewController:(id)arg1;
- (double)getHeight;
- (double)getWidth;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
- (void)initBackgroundTint;
- (id)initWithRatio:(double)arg1 heigthRatio:(double)arg2;
- (void)loadView;
@property(retain, nonatomic) UIViewController *popup; // @synthesize popup=_popup;
- (void)resize:(double)arg1 heightRatio:(double)arg2;
@property(nonatomic) double widthRatio; // @synthesize widthRatio=_widthRatio;

@end

