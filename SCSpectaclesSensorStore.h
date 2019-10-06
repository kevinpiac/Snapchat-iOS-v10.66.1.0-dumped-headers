//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCSpectaclesCache, SCSpectaclesEventListenerAnnouncer;
@protocol SCPerforming;

@interface SCSpectaclesSensorStore : NSObject
{
    NSMutableDictionary *_calibrations;
    SCSpectaclesCache *_cache;
    SCSpectaclesEventListenerAnnouncer *_announcer;
    id <SCPerforming> _archivePerformer;
}

- (void).cxx_destruct;
- (void)_loadArchive;
- (void)_saveArchive;
- (void)addCalibration:(id)arg1;
@property(retain, nonatomic) SCSpectaclesEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) id <SCPerforming> archivePerformer; // @synthesize archivePerformer=_archivePerformer;
@property(retain, nonatomic) SCSpectaclesCache *cache; // @synthesize cache=_cache;
- (id)calibrationForSerialNumber:(id)arg1;
- (void)dealloc;
- (id)initWithAnnouncer:(id)arg1 cache:(id)arg2;
- (void)removeCalibrationForSerialNumber:(id)arg1;
- (void)saveArchive;

@end

