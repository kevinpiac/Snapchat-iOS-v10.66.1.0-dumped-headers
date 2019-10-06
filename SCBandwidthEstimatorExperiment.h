//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacConnectionClassProvider-Protocol.h"
#import "SCConnectionClassManagerV2Listener-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCOperaBandwidthEstimator-Protocol.h"
#import "SCOperaConnectionClassProvider-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCBandwidthEstimatorListenerAnnouncer, SCNetworkActivityListenerAnnouncer, SCQueuePerformer;
@protocol SCFilterBase;

@interface SCBandwidthEstimatorExperiment : NSObject <SCCognacConnectionClassProvider, SCOperaBandwidthEstimator, SCOperaConnectionClassProvider, SCNetworkConnectivityListener, SCConnectionClassManagerV2Listener>
{
    double _filterCoefficient;
    SCQueuePerformer *_performer;
    NSMutableSet *_receivingDataRequestSet;
    NSMutableSet *_sendingDataRequestSet;
    NSObject<SCFilterBase> *_downloadExperimentFilter;
    NSObject<SCFilterBase> *_uploadExperimentFilter;
    double _lastDownloadBandwidthSampleTime;
    double _lastUploadBandwidthSampleTime;
    double _lastFilterResetTime;
    _Bool _isCachedDownloadBandwidth;
    _Bool _isCachedUploadBandwidth;
    NSMutableDictionary *_downloadBandwidthEstimatorRecordMap;
    NSMutableDictionary *_uploadBandwidthEstimatorRecordMap;
    long long _currentNetworkConnectivityStatus;
    SCBandwidthEstimatorListenerAnnouncer *_announcer;
    NSMutableDictionary *_downloadBandwidthAccuracyRecordMap;
    NSMutableDictionary *_uploadBandwidthAccuracyRecordMap;
    long long _downloadBandwidth;
    long long _currentDownloadBandwidthClass;
    long long _uploadBandwidth;
    long long _currentUploadBandwidthClass;
    long long _lastRecordedDownloadBandwidth;
    SCNetworkActivityListenerAnnouncer *_networkActivityAnnouncer;
    long long _lastRecordedUploadBandwidth;
    long long _downloadWorkload;
    long long _uploadWorkload;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_resetFiltering;
- (void)_setUpConnectionClassObservation;
- (void)_setUpNetworkAndAppStateObservation;
- (_Bool)_shouldFinishDownloadBandwidthEstimationEarlyWithRequestKey:(id)arg1;
- (_Bool)_shouldFinishUploadBandwidthEstimationEarlyWithRequestKey:(id)arg1;
- (_Bool)_shouldStartDownloadBandwidthEstimationWithRequestKey:(id)arg1 contentLength:(long long)arg2;
- (_Bool)_shouldStartUploadBandwidthEstimationWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2 bytesLeft:(long long)arg3;
- (void)_updateDownloadBandwidthEstimatorWithRequestKey:(id)arg1 contentLength:(long long)arg2;
- (void)_updateDownloadWorkloadWithRequestKey:(id)arg1 contentLength:(long long)arg2 requestStart:(_Bool)arg3;
- (void)_updateUploadBandwidthEstimatorWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)_updateUploadWorkloadWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2 requestStart:(_Bool)arg3;
- (void)addListener:(id)arg1;
- (long long)connectionClass;
- (long long)connectionClassForCognac;
@property long long currentDownloadBandwidthClass; // @synthesize currentDownloadBandwidthClass=_currentDownloadBandwidthClass;
- (id)currentDownloadBandwidthClassAsString;
@property long long currentUploadBandwidthClass; // @synthesize currentUploadBandwidthClass=_currentUploadBandwidthClass;
- (id)currentUploadBandwidthClassAsString;
- (void)dealloc;
- (void)didReceiveBytes:(unsigned long long)arg1;
- (void)didSendBytes:(unsigned long long)arg1;
@property long long downloadBandwidth; // @synthesize downloadBandwidth=_downloadBandwidth;
- (void)downloadConnectionClassDidChange:(id)arg1;
@property long long downloadWorkload; // @synthesize downloadWorkload=_downloadWorkload;
- (void)finishDownloadBandwidthEstimationWithRequestKey:(id)arg1 contentLength:(long long)arg2;
- (void)finishRecordDownloadBandwidthAccuracyWithRequestKey:(id)arg1 contentLength:(long long)arg2;
- (void)finishRecordUploadBandwidthAccuracyWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)finishUploadBandwidthEstimationWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2;
- (id)init;
@property long long lastRecordedDownloadBandwidth; // @synthesize lastRecordedDownloadBandwidth=_lastRecordedDownloadBandwidth;
@property long long lastRecordedUploadBandwidth; // @synthesize lastRecordedUploadBandwidth=_lastRecordedUploadBandwidth;
@property(retain, nonatomic) SCNetworkActivityListenerAnnouncer *networkActivityAnnouncer; // @synthesize networkActivityAnnouncer=_networkActivityAnnouncer;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)removeListener:(id)arg1;
@property long long uploadBandwidth; // @synthesize uploadBandwidth=_uploadBandwidth;
@property long long uploadWorkload; // @synthesize uploadWorkload=_uploadWorkload;
- (_Bool)shouldGetWifiSSID;
- (void)startDownloadBandwidthEstimationWithRequestKey:(id)arg1 contentLength:(long long)arg2;
- (void)startRecordDownloadBandwidthAccuracyWithRequestKey:(id)arg1 mediaType:(id)arg2 contentType:(id)arg3 contentLength:(long long)arg4;
- (void)startRecordUploadBandwidthAccuracyWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2;
- (void)startUploadBandwidthEstimationWithRequestKey:(id)arg1 totalBytesExpectedToSend:(long long)arg2 bytesLeft:(long long)arg3;
- (void)uploadConnectionClassDidChange:(id)arg1;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
