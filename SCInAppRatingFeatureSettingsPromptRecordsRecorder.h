//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureSettingsManager, SCInAppRatingFeatureSettingsPromptRecordsParser;

@interface SCInAppRatingFeatureSettingsPromptRecordsRecorder : NSObject
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCInAppRatingFeatureSettingsPromptRecordsParser *_recordsParser;
}

+ (_Bool)canShowInAppRatingPrompt:(id)arg1;
- (void).cxx_destruct;
- (long long)_getCumulativeSeenLast365Days:(id)arg1;
- (void)_getSerializedJsonAndWriteToFeatureSettings;
- (long long)getRatingOSPromptCumulativeSeenLast365Days;
- (long long)getRatingPrePromptCumulativeSeenLast365Days;
- (id)initWithFeatureSettingsManager:(id)arg1;
- (void)setOSPromptDialogCalledTimestamp;
- (void)setPrePromptDialogViewedTimestamp;
- (void)setPrePromptDialogViewedWithUserAction:(id)arg1;

@end

