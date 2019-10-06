//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIScrollView;
@protocol OS_dispatch_source;

@interface SCAbuseReportView : UIView
{
    UIButton *_continueButton;
    TTTAttributedLabel *_reportMessage;
    UILabel *_reportTitle;
    UIImageView *_reportGhost;
    NSObject<OS_dispatch_source> *_timer;
    UIScrollView *_warningScrollView;
    UIView *_scrollViewBody;
}

- (void).cxx_destruct;
- (void)cancelCountDown;
- (void)didEnterBackground:(id)arg1;
- (void)initContinueButtonWithTarget:(id)arg1 acceptSelector:(SEL)arg2;
- (void)initReportGhost;
- (void)initReportMessageWithString:(id)arg1 withLinkDelegate:(id)arg2;
- (void)initReportTitle;
- (id)initWithFrame:(struct CGRect)arg1 continueDelegate:(id)arg2 linkDelegate:(id)arg3 reportMessage:(id)arg4;
- (void)openCountdown;
@property(retain, nonatomic) UIView *scrollViewBody; // @synthesize scrollViewBody=_scrollViewBody;
@property(retain, nonatomic) UIScrollView *warningScrollView; // @synthesize warningScrollView=_warningScrollView;
- (void)willEnterForeground:(id)arg1;

@end

