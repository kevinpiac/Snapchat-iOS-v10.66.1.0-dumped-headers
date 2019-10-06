//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSDictionary, NSMutableSet, SCOperaViewController;

@interface SCOperaBlackSnapsWatchdogTrackingPlugin : SCOperaPlaylistEventTrackerPlugin
{
    _Bool _pluginEnabled;
    SCOperaViewController *_operaViewController;
    NSDictionary *_context;
    _Bool _isMonitoring;
    unsigned long long _numberOfBlackSnapsDetected;
    NSMutableSet *_accumulatedImagesPerView;
    _Bool _isStartedPlaying;
    CDUnknownBlockType _didDetectBlock;
}

- (void).cxx_destruct;
- (void)_handleBlackView:(_Bool)arg1;
- (void)_notifiyBlackSnapOccurred;
- (void)_resetState;
- (void)_scheduleNextCheck;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)check;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType didDetectBlock; // @synthesize didDetectBlock=_didDetectBlock;
- (id)init;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)teardown;

@end

