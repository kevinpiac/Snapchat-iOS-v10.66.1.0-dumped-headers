//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCLogger, SCQueuePerformer;

@interface SCEventAggregator : NSObject
{
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_events;
    CDUnknownBlockType _logEventsBlock;
    SCLogger *_logger;
    double _delaySeconds;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (CDUnknownBlockType)_createLogEventsBlock;
- (void)_logEvents;
- (void)_logEventsLater;
- (void)_logEventsNow;
- (void)_willResignActive;
@property double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
- (void)event:(id)arg1 parameters:(id)arg2;
- (id)init;
@property(retain) SCLogger *logger; // @synthesize logger=_logger;

@end

