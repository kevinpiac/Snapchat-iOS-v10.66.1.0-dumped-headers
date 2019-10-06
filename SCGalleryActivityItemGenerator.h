//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoryExporterDelegate-Protocol.h"

@class NSMapTable, NSString;

@interface SCGalleryActivityItemGenerator : NSObject <SCStoryExporterDelegate>
{
    NSMapTable *_activityItemProvidrToProgressHandlerMapTable;
    NSMapTable *_activityItemProviderToResultHandlerMapTable;
    _Bool _cancelled;
}

+ (id)_sharedGenerator;
+ (void)cancel;
+ (void)generateItemForActivityItemProvider:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)generateItemsForActivityItemProvider:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (_Bool)supportsProgressHandlerForActivityItemProvider:(id)arg1;
- (void).cxx_destruct;
- (id)_addGhostmantisMetadataToLeftImage:(id)arg1 rightImage:(id)arg2 snap:(id)arg3;
- (id)_addMetadataToImage:(id)arg1 snap:(id)arg2;
- (void)_addMetadataToImage:(id)arg1 snap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancel;
- (void)_completeWithActivityItemProvider:(id)arg1 item:(id)arg2 error:(id)arg3;
- (id)_cropImage:(id)arg1 snap:(id)arg2 isEdited:(_Bool)arg3 exportFormat:(long long)arg4;
- (id)_drawWithCircle:(id)arg1 circlePadding:(double)arg2 circleColorBlack:(_Bool)arg3 circleMask:(_Bool)arg4;
- (void)_generateItemForActivityItemProvider:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_generateItemForImageAssetActivityItemProvider:(id)arg1;
- (void)_generateItemForImagePreviewActivityItemProvider:(id)arg1;
- (void)_generateItemForPhotoSnap:(id)arg1 activityItemProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_generateItemForPhotoSnapActivityItemProvider:(id)arg1;
- (void)_generateItemForStoryActivityItemProvider:(id)arg1;
- (void)_generateItemForVideoAssetActivityItemProvider:(id)arg1;
- (void)_generateItemForVideoPreviewActivityItemProvider:(id)arg1;
- (void)_generateItemForVideoSnap:(id)arg1 activityItemProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_generateItemForVideoSnapActivityItemProvider:(id)arg1;
- (void)_generateItemsForSnaps:(id)arg1 atIndex:(unsigned long long)arg2 activityItemProvider:(id)arg3 completedItems:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)_generateNewportImageForSnap:(id)arg1 snapDetail:(id)arg2 cloudFile:(id)arg3 userSession:(id)arg4;
- (void)_generateNewportItemForImagePreviewActivityItemProvider:(id)arg1;
- (id)_prepareImage:(id)arg1 configuration:(id)arg2 spectaclesExportFormat:(long long)arg3 userSession:(id)arg4;
- (void)_prepareVideoFilter:(id)arg1 forSpectaclesSnap:(id)arg2 activityItemProvider:(id)arg3;
- (void)_prepareVideoFilter:(id)arg1 forSpectaclesSnap:(id)arg2 previewActivityItemProvider:(id)arg3;
- (void)_progressWithActivityItemProvider:(id)arg1 progress:(float)arg2;
- (void)_startWithActivityItemProvider:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (struct CGSize)_targetSizeForSpectaclesSnap:(id)arg1 activityItemProvider:(id)arg2;
- (void)_writeVideoWithImage:(id)arg1 size:(struct CGSize)arg2 duration:(double)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyExporter:(id)arg1 didFinishExportingToURL:(id)arg2 withError:(id)arg3;
- (void)storyExporter:(id)arg1 didProceedToProgress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
