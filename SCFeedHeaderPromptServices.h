//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureSettingsManager, SCLazy;

@interface SCFeedHeaderPromptServices : NSObject
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLazy *_legacyPromptStateProvider;
    SCLazy *_promptDataCoordinator;
}

- (void).cxx_destruct;
- (id)initWithFeatureSettingsManager:(id)arg1 legacyPromptStateProvider:(id)arg2;
@property(readonly, nonatomic) SCLazy *legacyPromptStateProvider; // @synthesize legacyPromptStateProvider=_legacyPromptStateProvider;
@property(readonly, nonatomic) SCLazy *promptDataCoordinator; // @synthesize promptDataCoordinator=_promptDataCoordinator;

@end

