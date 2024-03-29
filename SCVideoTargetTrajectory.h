//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCVideoTargetTrajectory : NSObject
{
    struct map<double, SOJUGalleryTransform *, std::__1::less<double>, std::__1::allocator<std::__1::pair<const double, SOJUGalleryTransform *>>> _trajectory;
    double _videoDuration;
    _Bool _completedOverride;
    _Bool _repeatTrajectoryForLoopingVideo;
    double _maxTrackedFrameTimeInSeconds;
    double _minTrackedFrameTimeInSeconds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTransform:(id)arg1 atTimestamp:(double)arg2;
- (double)_timestampFromCMTime:(CDStruct_1b6d18a9)arg1;
- (id)_trajectoryString;
- (void)addTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithTrajectoryState:(id)arg1;
- (id)initWithVideoDuration:(double)arg1;
- (_Bool)isTrajectoryComplete;
@property(readonly, nonatomic) double maxTrackedFrameTimeInSeconds; // @synthesize maxTrackedFrameTimeInSeconds=_maxTrackedFrameTimeInSeconds;
@property(readonly, nonatomic) double minTrackedFrameTimeInSeconds; // @synthesize minTrackedFrameTimeInSeconds=_minTrackedFrameTimeInSeconds;
- (id)newVideoTargetTrajectoryForBounceState:(id)arg1;
@property(nonatomic) _Bool repeatTrajectoryForLoopingVideo; // @synthesize repeatTrajectoryForLoopingVideo=_repeatTrajectoryForLoopingVideo;
- (id)toTrajectoryState;
- (id)transformAtTime:(CDStruct_1b6d18a9)arg1;

@end

