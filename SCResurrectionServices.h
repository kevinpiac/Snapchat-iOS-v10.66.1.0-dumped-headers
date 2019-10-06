//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureSettingsManager, SCPreferences;
@protocol SCObserving, SCPerforming;

@interface SCResurrectionServices : NSObject
{
    SCPreferences *_preferences;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCPerforming> _queuePerformer;
    id <SCObserving> _resDaysObserveContext;
}

- (void).cxx_destruct;
- (void)_observeResDaysChange;
- (void)_resDaysChangeHandler:(id)arg1;
- (void)_updateResurrectionFieldIfNeeded:(long long)arg1;
- (id)initWithPreferences:(id)arg1 featureSettingsManager:(id)arg2;

@end
