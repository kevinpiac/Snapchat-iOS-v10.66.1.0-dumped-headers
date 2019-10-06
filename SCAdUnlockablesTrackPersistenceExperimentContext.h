//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAdUnlockablesTrackPersistenceExperimentContext : SCExperimentContext
{
    _Bool _adUnlockablesTrackPersistenceEnabled;
    _Bool _adUnlockablesTrackBackgroundRetryEnabled;
    long long _adUnlockablesTrackMaxFileAgeMillis;
    long long _adUnlockablesTrackMaxFileSizeBytes;
    long long _adUnlockablesTrackMaxPersistedRequests;
}

@property(readonly, nonatomic) _Bool adUnlockablesTrackBackgroundRetryEnabled; // @synthesize adUnlockablesTrackBackgroundRetryEnabled=_adUnlockablesTrackBackgroundRetryEnabled;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxFileAgeMillis; // @synthesize adUnlockablesTrackMaxFileAgeMillis=_adUnlockablesTrackMaxFileAgeMillis;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxFileSizeBytes; // @synthesize adUnlockablesTrackMaxFileSizeBytes=_adUnlockablesTrackMaxFileSizeBytes;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxPersistedRequests; // @synthesize adUnlockablesTrackMaxPersistedRequests=_adUnlockablesTrackMaxPersistedRequests;
@property(readonly, nonatomic) _Bool adUnlockablesTrackPersistenceEnabled; // @synthesize adUnlockablesTrackPersistenceEnabled=_adUnlockablesTrackPersistenceEnabled;
- (id)experimentName;
- (void)setupParameters;

@end
