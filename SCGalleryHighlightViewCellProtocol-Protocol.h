//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryViewCellUpdating-Protocol.h"

@class SCUserSession;
@protocol SCGallerySnap;

@protocol SCGalleryHighlightViewCellProtocol <SCGalleryViewCellUpdating>
- (void)setSnap:(id <SCGallerySnap>)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 contentsUnloaded:(_Bool)arg4 userSession:(SCUserSession *)arg5;
@end

