//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, SCGallerySnap, SCGallerySnapDetail;

@protocol SCGalleryStreamingSnapPackageFetching <NSObject>
- (void)fetchStreamingPackageForSnap:(id <SCGallerySnap>)arg1 snapDetail:(id <SCGallerySnapDetail>)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(NSError *, SCGalleryStreamingSnapPackage *))arg5;
@end

