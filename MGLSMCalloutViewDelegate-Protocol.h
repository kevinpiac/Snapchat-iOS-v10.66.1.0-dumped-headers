//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MGLSMCalloutView;

@protocol MGLSMCalloutViewDelegate <NSObject>

@optional
- (double)calloutView:(MGLSMCalloutView *)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)calloutViewClicked:(MGLSMCalloutView *)arg1;
- (void)calloutViewDidAppear:(MGLSMCalloutView *)arg1;
- (void)calloutViewDidDisappear:(MGLSMCalloutView *)arg1;
- (_Bool)calloutViewShouldHighlight:(MGLSMCalloutView *)arg1;
- (void)calloutViewWillAppear:(MGLSMCalloutView *)arg1;
- (void)calloutViewWillDisappear:(MGLSMCalloutView *)arg1;
@end

