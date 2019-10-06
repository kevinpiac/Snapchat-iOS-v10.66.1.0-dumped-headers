//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAsynchronousOperation.h"

@class NSArray, NSDate, NSError, SCGalleryVisualSearchIndexer, SCQueuePerformer, SCUserSession;
@protocol SCCanceling, SCGallerySnap;

@interface SCGallerySnapFaceAnalysisOperation : SCAsynchronousOperation
{
    SCGalleryVisualSearchIndexer *_visualSearchIndexer;
    NSDate *_startDate;
    NSDate *_downloadEndDate;
    NSDate *_analyzeStartDate;
    NSDate *_analyzeEndDate;
    int _gallerySnapMediaType;
    NSArray *_results;
    NSError *_error;
    id <SCGallerySnap> _gallerySnap;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    id <SCCanceling> _downloadRequest;
}

- (void).cxx_destruct;
- (void)_analyzeGallerySnap:(id)arg1 withcloudFile:(id)arg2;
- (void)_fetchMediaForGallerySnap:(id)arg1;
- (void)cancel;
@property(retain, nonatomic) id <SCCanceling> downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
- (id)initWithGallerySnap:(id)arg1 userSession:(id)arg2;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)start;
- (id)timeTaken;

@end

