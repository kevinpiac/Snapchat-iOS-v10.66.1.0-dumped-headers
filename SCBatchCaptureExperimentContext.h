//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBatchCaptureExperimentContext : SCExperimentContext
{
    _Bool _batchCapturePlaybackEnabled;
    _Bool _batchCaptureRecoveryEnabled;
    _Bool _batchCaptureUpdateStoryWhenSaving;
}

@property(readonly, nonatomic) _Bool batchCapturePlaybackEnabled; // @synthesize batchCapturePlaybackEnabled=_batchCapturePlaybackEnabled;
@property(readonly, nonatomic) _Bool batchCaptureRecoveryEnabled; // @synthesize batchCaptureRecoveryEnabled=_batchCaptureRecoveryEnabled;
@property(readonly, nonatomic) _Bool batchCaptureUpdateStoryWhenSaving; // @synthesize batchCaptureUpdateStoryWhenSaving=_batchCaptureUpdateStoryWhenSaving;
- (id)experimentName;
- (void)setupParameters;

@end

