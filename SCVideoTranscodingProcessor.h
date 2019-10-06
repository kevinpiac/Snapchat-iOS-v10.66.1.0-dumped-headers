//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTranscodingProcessor-Protocol.h"

@class NSString, SCCancelableRequest, SCMultiSnapVideoSegmentedExportSession, SCVideoTranscodingRequest, SCVideoTranscodingRequestConfiguration, SCVideoTranscodingSession;

@interface SCVideoTranscodingProcessor : NSObject <SCTranscodingProcessor>
{
    SCVideoTranscodingRequest *_request;
    SCVideoTranscodingRequestConfiguration *_requestConfiguration;
    SCCancelableRequest *_cancelable;
    SCMultiSnapVideoSegmentedExportSession *_segmentedExportSession;
    SCVideoTranscodingSession *_videoTranscodingSession;
}

+ (id)performer;
- (void).cxx_destruct;
- (id)_createTranscodingConfigurationWithVideoAsset:(id)arg1;
- (id)_createVideoExportImageProcessorWithVideoAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)_processSegmentAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldBlenOverlay;
- (_Bool)_shouldEnableContentAdaptiveVideoExportWithVideoAsset:(id)arg1 rawDataURL:(id)arg2;
- (void)_transcodeVideoAtUrl:(id)arg1 segmentInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancel;
@property(retain, nonatomic) SCCancelableRequest *cancelable; // @synthesize cancelable=_cancelable;
- (id)initWithRequest:(id)arg1 configuration:(id)arg2;
- (void)processWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SCVideoTranscodingRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) SCVideoTranscodingRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(retain, nonatomic) SCMultiSnapVideoSegmentedExportSession *segmentedExportSession; // @synthesize segmentedExportSession=_segmentedExportSession;
@property(retain, nonatomic) SCVideoTranscodingSession *videoTranscodingSession; // @synthesize videoTranscodingSession=_videoTranscodingSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

