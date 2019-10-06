//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCConnectionClassManagerListener-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSDate, NSString, SCQueuePerformer;
@protocol OS_dispatch_source, SCFilterBase;

@interface SCBandwidthEstimator_DEPRECATED : NSObject <SCNetworkConnectivityListener, SCConnectionClassManagerListener>
{
    double _filterCoefficient;
    double _filterUpdateTimeInterval;
    unsigned long long _minimumBytesThresholdInCurrentInterval;
    SCQueuePerformer *_performer;
    unsigned long long _LargeTaskThresholdForcingUpdate;
    NSObject<SCFilterBase> *_downloadFilter;
    NSObject<SCFilterBase> *_uploadFilter;
    unsigned long long _bytesReceivedInCurrentInterval;
    unsigned long long _bytesSentInCurrentInterval;
    NSObject<OS_dispatch_source> *_filterUpdateTimer;
    long long _lastAnnouncedDownloadBandwidth;
    unsigned long long _bytesReceivedInCurrentSession;
    unsigned long long _bytesSentInCurrentSession;
    _Bool _isActive;
    long long _downloadBandwidth;
    long long _uploadBandwidth;
    long long _currentDownloadBandwidthClass;
    NSDate *_lastUpdateTime;
    unsigned long long _numOfLargeDLTasks;
    unsigned long long _numOfLargeULTasks;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_removeFiltering;
- (void)_setUpConnectionClassObservation;
- (void)_setUpFiltering;
- (void)_setUpNetworkAndAppStateObservation;
- (void)_updateFilter;
- (void)connectionClassDidChange:(id)arg1;
- (id)createSessionTimerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)currentBandwidthClassAsString;
@property long long currentDownloadBandwidthClass; // @synthesize currentDownloadBandwidthClass=_currentDownloadBandwidthClass;
- (void)dealloc;
- (void)didReceiveBytes:(unsigned long long)arg1;
- (void)didSendBytes:(unsigned long long)arg1;
@property long long downloadBandwidth; // @synthesize downloadBandwidth=_downloadBandwidth;
- (id)init;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
@property(nonatomic) unsigned long long numOfLargeDLTasks; // @synthesize numOfLargeDLTasks=_numOfLargeDLTasks;
@property(nonatomic) unsigned long long numOfLargeULTasks; // @synthesize numOfLargeULTasks=_numOfLargeULTasks;
- (void)postDownloadBandwidthChangedNotificationIfNeeded;
@property long long uploadBandwidth; // @synthesize uploadBandwidth=_uploadBandwidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

