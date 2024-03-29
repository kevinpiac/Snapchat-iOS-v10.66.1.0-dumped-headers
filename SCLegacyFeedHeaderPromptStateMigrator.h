//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureSettingsManager, SCLazy;
@protocol SCPerforming;

@interface SCLegacyFeedHeaderPromptStateMigrator : NSObject
{
    SCLazy *_legacyPromptStateProvider;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_migrateLegacyStatesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLegacyPromptStateProvider:(id)arg1 featureSettingsManager:(id)arg2;
- (void)migrateLegacyStatesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

