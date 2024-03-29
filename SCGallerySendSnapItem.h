//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryItemSending-Protocol.h"

@class NSString, SCPromise, SCUserSession;
@protocol SCGallerySnap, SCGallerySnapDetail, SCProgressReporting><SCCanceling;

@interface SCGallerySendSnapItem : NSObject <SCGalleryItemSending>
{
    id <SCGallerySnap> _gallerySnap;
    id <SCGallerySnapDetail> _gallerySnapDetail;
    SCUserSession *_userSession;
    SCPromise *_smartSharePackagePromise;
    id <SCProgressReporting><SCCanceling> _downloadRequest;
}

- (void).cxx_destruct;
- (id)_buildSmartShareRequestFromPackage:(id)arg1;
- (_Bool)_isAnimatedPhoto;
- (void)_mediaDataForAnimatedPhoto:(CDUnknownBlockType)arg1 performer:(id)arg2;
- (void)_mediaDataForPhoto:(CDUnknownBlockType)arg1 performer:(id)arg2;
- (void)_mediaDataForVideo:(CDUnknownBlockType)arg1 cloudFile:(id)arg2 performer:(id)arg3;
- (void)_prepareMediaDataWithPerformer:(id)arg1;
- (void)_prepareSmartSharingPackageWithPerformer:(id)arg1;
- (id)_snapDetail;
- (id)captureTime;
- (double)duration;
- (id)initWithGallerySnap:(id)arg1 userSession:(id)arg2;
- (_Bool)isCameraRollItem;
- (_Bool)isInfiniteDuration;
- (void)mediaData:(CDUnknownBlockType)arg1 performer:(id)arg2;
- (long long)mediaType;
- (long long)orientation;
- (void)prepare:(id)arg1;
- (void)remoteCheckSmartShareEligibility:(CDUnknownBlockType)arg1 performer:(id)arg2;
- (id)repostAttribution;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

