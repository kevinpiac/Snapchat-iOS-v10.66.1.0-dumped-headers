//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMediaPackageExtraParams, SCPreviewBlob, SCPreviewConfiguration;
@protocol SCPerforming;

@protocol SCMediaPackagePreviewAdapting <NSObject>
- (void)createMediaPackageWithPreviewBlob:(SCPreviewBlob *)arg1 extraParams:(SCMediaPackageExtraParams *)arg2 previewConfiguration:(SCPreviewConfiguration *)arg3 callbackPerformer:(id <SCPerforming>)arg4 completion:(void (^)(SCMediaPackageHandle *, NSError *))arg5;
@end

