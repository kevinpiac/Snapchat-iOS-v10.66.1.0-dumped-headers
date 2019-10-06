//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHAsset, SCCloudFSFile, SCEncryptedContentManager;
@protocol SCGallerySnap;

@interface SCGallerySendItemSegmentQueueItem : NSObject
{
    SCEncryptedContentManager *_encryptedContentManager;
    SCCloudFSFile *_cloudFile;
    NSMutableArray *_completionBlocks;
    NSArray *_segmentURLs;
    _Bool _didStart;
    PHAsset *_phAsset;
    id <SCGallerySnap> _snap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didStart; // @synthesize didStart=_didStart;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithVideoAsset:(id)arg1;
- (id)initWithVideoSnap:(id)arg1 encryptedContentManager:(id)arg2 cloudFile:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void)queueCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (void)startSegmentWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

