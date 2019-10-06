//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCSnapAdsAdLifecycleInfo : NSObject
{
    _Bool _mediaCacheHit;
    _Bool _noFillAdRequestFail;
    _Bool _streamingEnabled;
    double _lastAppBackgroundTimestamp;
    double _lastAppForegroundTimestamp;
    double _viewingSessionStartTimestamp;
    double _viewingSessionEndTimestamp;
    double _adRequestSubmitTimestamp;
    double _adRequestCompleteTimestamp;
    long long _adRequestConnectionDownloadBandwidthBps;
    long long _adRequestStatusCode;
    double _adResponseDeserializationStartTimestamp;
    double _adResponseDeserializationEndTimestamp;
    double _adMediaSize;
    double _adMediaStartDownloadTimestamp;
    double _adMediaFinishDownloadTimestamp;
    long long _adMediaConnectionDownloadBandwidthBps;
    long long _adTopSnapMediaType;
    double _adInsertionTimestamp;
    double _firstTimeAdViewStartTimestamp;
    double _firstTimeAdViewFinishTimestamp;
    long long _adIndexPosition;
    long long _noFillAdNotRequestedCount;
    long long _noFillAdRequestInProgressCount;
    double _noFillAdRequestInProgressTimestamp;
    long long _noFillAdMediaDownloadInProgressCount;
    double _noFillAdMediaDownloadInProgressTimestamp;
    long long _noFillAdMediaDownloadError;
    long long _noFillAdNotBrandSafeCount;
    long long _noFillAdMediaMissingCount;
    long long _totalStallCount;
    long long _stallOnStartDurationMillis;
    long long _firstStallMediaTimeMillis;
    long long _totalStallDurationMillis;
    long long _firstStallDurationMillis;
    NSNumber *_videoLoadedOnEntry;
    NSNumber *_videoLoadedOnExit;
    NSNumber *_mediaWaitTimeInSec;
    NSString *_adId;
    NSString *_adRequestId;
    NSString *_adRequestUrl;
    NSString *_adType;
    unsigned long long _adProductSourceType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(nonatomic) long long adIndexPosition; // @synthesize adIndexPosition=_adIndexPosition;
@property(nonatomic) double adInsertionTimestamp; // @synthesize adInsertionTimestamp=_adInsertionTimestamp;
@property(nonatomic) long long adMediaConnectionDownloadBandwidthBps; // @synthesize adMediaConnectionDownloadBandwidthBps=_adMediaConnectionDownloadBandwidthBps;
@property(nonatomic) double adMediaFinishDownloadTimestamp; // @synthesize adMediaFinishDownloadTimestamp=_adMediaFinishDownloadTimestamp;
@property(nonatomic) double adMediaSize; // @synthesize adMediaSize=_adMediaSize;
@property(nonatomic) double adMediaStartDownloadTimestamp; // @synthesize adMediaStartDownloadTimestamp=_adMediaStartDownloadTimestamp;
@property(nonatomic) unsigned long long adProductSourceType; // @synthesize adProductSourceType=_adProductSourceType;
@property(nonatomic) double adRequestCompleteTimestamp; // @synthesize adRequestCompleteTimestamp=_adRequestCompleteTimestamp;
@property(nonatomic) long long adRequestConnectionDownloadBandwidthBps; // @synthesize adRequestConnectionDownloadBandwidthBps=_adRequestConnectionDownloadBandwidthBps;
@property(copy, nonatomic) NSString *adRequestId; // @synthesize adRequestId=_adRequestId;
@property(nonatomic) long long adRequestStatusCode; // @synthesize adRequestStatusCode=_adRequestStatusCode;
@property(nonatomic) double adRequestSubmitTimestamp; // @synthesize adRequestSubmitTimestamp=_adRequestSubmitTimestamp;
@property(copy, nonatomic) NSString *adRequestUrl; // @synthesize adRequestUrl=_adRequestUrl;
@property(nonatomic) double adResponseDeserializationEndTimestamp; // @synthesize adResponseDeserializationEndTimestamp=_adResponseDeserializationEndTimestamp;
@property(nonatomic) double adResponseDeserializationStartTimestamp; // @synthesize adResponseDeserializationStartTimestamp=_adResponseDeserializationStartTimestamp;
@property(nonatomic) long long adTopSnapMediaType; // @synthesize adTopSnapMediaType=_adTopSnapMediaType;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(nonatomic) long long firstStallDurationMillis; // @synthesize firstStallDurationMillis=_firstStallDurationMillis;
@property(nonatomic) long long firstStallMediaTimeMillis; // @synthesize firstStallMediaTimeMillis=_firstStallMediaTimeMillis;
@property(nonatomic) double firstTimeAdViewFinishTimestamp; // @synthesize firstTimeAdViewFinishTimestamp=_firstTimeAdViewFinishTimestamp;
@property(nonatomic) double firstTimeAdViewStartTimestamp; // @synthesize firstTimeAdViewStartTimestamp=_firstTimeAdViewStartTimestamp;
@property(nonatomic) double lastAppBackgroundTimestamp; // @synthesize lastAppBackgroundTimestamp=_lastAppBackgroundTimestamp;
@property(nonatomic) double lastAppForegroundTimestamp; // @synthesize lastAppForegroundTimestamp=_lastAppForegroundTimestamp;
@property(nonatomic) _Bool mediaCacheHit; // @synthesize mediaCacheHit=_mediaCacheHit;
@property(retain, nonatomic) NSNumber *mediaWaitTimeInSec; // @synthesize mediaWaitTimeInSec=_mediaWaitTimeInSec;
@property(nonatomic) long long noFillAdMediaDownloadError; // @synthesize noFillAdMediaDownloadError=_noFillAdMediaDownloadError;
@property(nonatomic) long long noFillAdMediaDownloadInProgressCount; // @synthesize noFillAdMediaDownloadInProgressCount=_noFillAdMediaDownloadInProgressCount;
@property(nonatomic) double noFillAdMediaDownloadInProgressTimestamp; // @synthesize noFillAdMediaDownloadInProgressTimestamp=_noFillAdMediaDownloadInProgressTimestamp;
@property(nonatomic) long long noFillAdMediaMissingCount; // @synthesize noFillAdMediaMissingCount=_noFillAdMediaMissingCount;
@property(nonatomic) long long noFillAdNotBrandSafeCount; // @synthesize noFillAdNotBrandSafeCount=_noFillAdNotBrandSafeCount;
@property(nonatomic) long long noFillAdNotRequestedCount; // @synthesize noFillAdNotRequestedCount=_noFillAdNotRequestedCount;
@property(nonatomic) _Bool noFillAdRequestFail; // @synthesize noFillAdRequestFail=_noFillAdRequestFail;
@property(nonatomic) long long noFillAdRequestInProgressCount; // @synthesize noFillAdRequestInProgressCount=_noFillAdRequestInProgressCount;
@property(nonatomic) double noFillAdRequestInProgressTimestamp; // @synthesize noFillAdRequestInProgressTimestamp=_noFillAdRequestInProgressTimestamp;
@property(nonatomic) long long stallOnStartDurationMillis; // @synthesize stallOnStartDurationMillis=_stallOnStartDurationMillis;
@property(nonatomic) _Bool streamingEnabled; // @synthesize streamingEnabled=_streamingEnabled;
@property(nonatomic) long long totalStallCount; // @synthesize totalStallCount=_totalStallCount;
@property(nonatomic) long long totalStallDurationMillis; // @synthesize totalStallDurationMillis=_totalStallDurationMillis;
@property(retain, nonatomic) NSNumber *videoLoadedOnEntry; // @synthesize videoLoadedOnEntry=_videoLoadedOnEntry;
@property(retain, nonatomic) NSNumber *videoLoadedOnExit; // @synthesize videoLoadedOnExit=_videoLoadedOnExit;
@property(nonatomic) double viewingSessionEndTimestamp; // @synthesize viewingSessionEndTimestamp=_viewingSessionEndTimestamp;
@property(nonatomic) double viewingSessionStartTimestamp; // @synthesize viewingSessionStartTimestamp=_viewingSessionStartTimestamp;

@end

