//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCMultiSnapConfiguration, UIView;
@protocol SCFeatureMultiSnapDelegate;

@protocol SCFeatureMultiSnap
- (SCMultiSnapConfiguration *)configurationWithFinalDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) double defaultRecordingDuration;
@property(nonatomic) __weak id <SCFeatureMultiSnapDelegate> delegate;
@property(readonly, nonatomic) _Bool enabled;
- (void)finalizeCurrentSegment;
@property(readonly, nonatomic) struct CGRect frameForPreviewTransition;
- (void)prepareForRecordingWithCaptureSessionId:(NSString *)arg1;
- (void)reset;
@property(readonly, nonatomic) _Bool shouldFadeForPreviewTransition;
@property(readonly, nonatomic) UIView *viewForPreviewTransition;
@end
