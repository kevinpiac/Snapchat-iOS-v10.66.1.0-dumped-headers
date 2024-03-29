//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, NSURL, SCOperaPage;
@protocol SCOperaBandwidthEstimator;

@interface SCOperaRotatingVideoLayer : NSObject <SCOperaLayer>
{
    _Bool _controlsEnabled;
    _Bool _audioDisabled;
    _Bool _hasFraming;
    _Bool _shouldRotate;
    _Bool _streaming;
    unsigned long long _docking;
    unsigned long long _playbackMode;
    NSURL *_url;
    NSURL *_shareableURL;
    NSString *_assetKey;
    double _controlsMinimumDuration;
    double _mediaStartTime;
    double _mediaScaleFactor;
    SCOperaPage *_page;
    id <SCOperaBandwidthEstimator> _bandwidthEstimator;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) _Bool audioDisabled; // @synthesize audioDisabled=_audioDisabled;
@property(readonly, nonatomic) id <SCOperaBandwidthEstimator> bandwidthEstimator; // @synthesize bandwidthEstimator=_bandwidthEstimator;
@property(readonly, nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(readonly, nonatomic) double controlsMinimumDuration; // @synthesize controlsMinimumDuration=_controlsMinimumDuration;
@property(readonly, nonatomic) unsigned long long docking; // @synthesize docking=_docking;
@property(readonly, nonatomic) _Bool hasFraming; // @synthesize hasFraming=_hasFraming;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double mediaScaleFactor; // @synthesize mediaScaleFactor=_mediaScaleFactor;
@property(readonly, nonatomic) double mediaStartTime; // @synthesize mediaStartTime=_mediaStartTime;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) NSURL *shareableURL; // @synthesize shareableURL=_shareableURL;
@property(readonly, nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(readonly, nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
- (unsigned long long)type;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

