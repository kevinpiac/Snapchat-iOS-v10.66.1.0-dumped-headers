//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSString, PHAsset, SCQueuePerformer;
@protocol OS_dispatch_queue;

@interface SCGalleryPhotoLibraryObserver : NSObject <PHPhotoLibraryChangeObserver>
{
    SCQueuePerformer *_performer;
    PHAsset *_asset;
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)photoLibraryDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

