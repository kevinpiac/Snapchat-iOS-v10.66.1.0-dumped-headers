//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

@protocol LSALensAnalyticsDataComponentDelegate;

@interface LSALensAnalyticsDataComponent : LSABaseComponent
{
    struct shared_ptr<LSALensAnalyticsDataDelegateWrapper> _delegateWrapper;
    id <LSALensAnalyticsDataComponentDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LSALensAnalyticsDataComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestLensAnalyticsDataForEffectId:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (void)setLensAnalyticsData:(id)arg1 forEffectId:(id)arg2;

@end

