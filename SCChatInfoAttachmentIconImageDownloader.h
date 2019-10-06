//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyItemDownloading-Protocol.h"
#import "SCSummaryDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCQueuePerformer, SCUserSession;
@protocol SCChatInfoAttachmentIconImageDownloaderDelegate;

@interface SCChatInfoAttachmentIconImageDownloader : NSObject <SCSummaryDelegate, SCTraceEnabled, SCLegacyItemDownloading>
{
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    NSMutableArray *_downloadTrackers;
    NSMutableDictionary *_currentLoadings;
    id <SCChatInfoAttachmentIconImageDownloaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addCurrentLoadingsDownloaderHandler:(id)arg1 dataModel:(id)arg2;
- (id)_cachedDataModelForSummary:(id)arg1;
- (id)_cachedSummaryForDataModel:(id)arg1;
- (void)_callBackImageDownloadedWithSummary:(id)arg1 succeed:(_Bool)arg2;
- (void)_completePhoneIconImageFetchingWithItem:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)_createSummaryForDataModel:(id)arg1;
- (void)_loadIconImageWithDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)_summaryForDataModel:(id)arg1;
@property(nonatomic) __weak id <SCChatInfoAttachmentIconImageDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)failedToLoadUrlDataModel:(id)arg1;
- (void)fetchThumbnailDidFailForSummary:(id)arg1;
- (void)fetchThumbnailDidLoadForSummary:(id)arg1;
- (void)fetchThumbnailIsLoadingForSummmary:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)loadItem:(id)arg1 itemRemoteDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)recordConsumptionOfTrackingId:(id)arg1;
- (void)resetCache;
- (id)titleForUrlDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

