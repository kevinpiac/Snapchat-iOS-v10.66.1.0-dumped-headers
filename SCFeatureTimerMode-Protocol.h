//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SCFeatureTimerModeDelegate;

@protocol SCFeatureTimerMode
- (void)abortCountingDown;
@property(nonatomic) __weak id <SCFeatureTimerModeDelegate> delegate;
@property(nonatomic) _Bool enabled;
@property(nonatomic) _Bool gestureForwardingEnabled;
@property(readonly, nonatomic) _Bool isCountingDown;
- (void)toggleCountingDown;
@end

