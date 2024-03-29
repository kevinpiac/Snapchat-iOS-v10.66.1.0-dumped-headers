//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCStoriesBlizzardLogging, SCStoriesGrapheneMetricsEmitting;

@interface SCStoriesMetricServices : NSObject
{
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    id <SCStoriesBlizzardLogging> _blizzardLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCStoriesBlizzardLogging> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
@property(readonly, nonatomic) id <SCStoriesGrapheneMetricsEmitting> grapheneMetricsEmitter; // @synthesize grapheneMetricsEmitter=_grapheneMetricsEmitter;
- (id)initWithGrapheneMetricsEmitter:(id)arg1 blizzardLogger:(id)arg2;

@end

