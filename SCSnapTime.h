//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Story;

@interface SCSnapTime : NSObject
{
    double _totalTimePaused;
    double _unviewedTotalTimePaused;
    double _timeWhenPaused;
    double _unviewedTimeWhenPaused;
    double _timeWhenUnpaused;
    double _unviewedTimeWhenUnpaused;
    double _timeLeftLoopingAdjustmentFactor;
    double _timeLeftOnMediaPlayer;
    double _timeStartedViewing;
    double _unviewedTimeStartedViewing;
    double _closedAt;
    double _unviewedClosedAt;
    double _timeLeft;
    double _unviewedTimeLeft;
    double _videoTimeSoFar;
    double _unviewedVideoTimeSoFar;
    _Bool _isCountingDown;
    _Bool _unviewedIsCountingDown;
    _Bool _isPaused;
    _Bool _unviewedIsPaused;
    double _timeContinuedViewing;
    double _unviewedTimeContinuedViewing;
    double _timeWhenLooped;
    double _unviewedTimeWhenLooped;
    _Bool _isLooping;
    _Bool _unviewedIsLooping;
    double _timeWhenStoppedLooping;
    double _unviewedTimeWhenStoppedLooping;
    double _totalTimeLooping;
    double _unviewedTotalTimeLooping;
    double _unviewedViewTime;
    Story *_storySnap;
}

- (void).cxx_destruct;
- (void)calculateTotalTimeLeft:(long long)arg1;
- (double)closedAtForViewingType:(long long)arg1;
- (id)initWithStorySnap:(id)arg1;
- (void)initializeStoryTimersForViewingType:(long long)arg1;
- (_Bool)isCountingDownForViewingType:(long long)arg1;
- (_Bool)isLoopingForViewingType:(long long)arg1;
- (double)mostRecentTimeLoopingForViewingType:(long long)arg1;
- (double)mostRecentTimePausedForViewingType:(long long)arg1;
- (double)mostRecentViewLengthForViewingType:(long long)arg1;
- (void)resetMostRecentTimeLoopingForViewingType:(long long)arg1;
- (void)resetMostRecentTimePausedForViewingType:(long long)arg1;
- (void)resetTimeContinuedViewingForViewingType:(long long)arg1;
- (void)setClosedAt:(double)arg1 forViewingType:(long long)arg2;
- (void)setIsCountingDown:(_Bool)arg1 forViewingType:(long long)arg2;
- (void)setIsLooping:(_Bool)arg1 forViewingType:(long long)arg2;
- (void)setIsPaused:(_Bool)arg1 forViewingType:(long long)arg2;
@property(nonatomic) __weak Story *storySnap; // @synthesize storySnap=_storySnap;
- (void)setTimeLeft:(double)arg1 forViewingType:(long long)arg2;
- (void)setTimeStartedViewing:(double)arg1 forViewingType:(long long)arg2;
- (void)setTimeWhenLooped:(double)arg1 forViewingType:(long long)arg2;
- (void)setTimeWhenPaused:(double)arg1 forViewingType:(long long)arg2;
- (void)setTimeWhenStoppedLooping:(double)arg1 forViewingType:(long long)arg2;
- (void)setTimeWhenUnpaused:(double)arg1 forViewingType:(long long)arg2;
- (void)setTotalTimeLooping:(double)arg1 forViewingType:(long long)arg2;
- (void)setTotalTimePaused:(double)arg1 forViewingType:(long long)arg2;
- (void)setVideoTimeSoFar:(double)arg1 forViewingType:(long long)arg2;
- (double)timeLeftForViewingType:(long long)arg1;
- (double)timeStartedViewingForViewingType:(long long)arg1;
- (double)timeWhenLoopedForViewingType:(long long)arg1;
- (double)timeWhenPausedForViewingType:(long long)arg1;
- (double)timeWhenStoppedLoopingForViewingType:(long long)arg1;
- (double)timeWhenUnpausedForViewingType:(long long)arg1;
- (double)totalTimeLoopingForViewingType:(long long)arg1;
- (double)totalTimePausedForViewingType:(long long)arg1;
- (double)viewLengthForType:(long long)arg1;

@end

