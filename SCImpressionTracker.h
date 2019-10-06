//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, SCImpressionTrackingDelegate;

@interface SCImpressionTracker : NSObject
{
    NSMutableDictionary *_items;
    float _minimumVisibleFraction;
    double _minimumImpressionTime;
    _Bool _logImpressionsImmediately;
    _Bool _logImpressionsOnce;
    NSMutableSet *_loggedImpressions;
    NSObject<OS_dispatch_queue> *_queue;
    id <SCImpressionTrackingDelegate> _delegate;
}

+ (id)impressionTrackerWithConfiguration:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_canLogImpression:(id)arg1;
- (void)_clearLoggedImpressions;
- (id)_getItemsNoLongerTracked:(id)arg1;
- (id)_getItemsToLogFromItemsNoLongerTracked:(id)arg1 date:(id)arg2;
- (id)_getTrackedViewItems:(id)arg1;
- (id)_getUntrackedViewItems:(id)arg1;
- (_Bool)_presentLongEnough:(id)arg1 timestamp:(id)arg2;
- (_Bool)_significantlyVisible:(struct CGRect)arg1 viewPort:(struct CGRect)arg2;
- (id)_trackUnseenViewItemsIfNecessary:(id)arg1 viewPort:(struct CGRect)arg2;
- (id)_updateSeenViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (void)_updateWithViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (void)clearLoggedImpressions;
@property(nonatomic) __weak id <SCImpressionTrackingDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getMinimumVisibleFraction;
- (id)initWithMinimumVisibleFraction:(float)arg1 minimumImpressionTimeInterval:(double)arg2 logImpressionsImmediately:(_Bool)arg3 logImpressionsOnce:(_Bool)arg4 queue:(id)arg5;
- (void)updateWithViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;

@end

