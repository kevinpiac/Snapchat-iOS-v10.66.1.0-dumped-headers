//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCDiscoverBarContents, SCDiscoverMediaBlobMetadata;

@protocol SCDiscoverMediaThumbnailViewModel
- (SCDiscoverBarContents *)discoverBarContentsToDisplay;
- (SCDiscoverMediaBlobMetadata *)discoverMediaBlobMetadata;
- (void)saveDiscoverBarContents:(SCDiscoverBarContents *)arg1;
- (_Bool)shouldDisplayDiscoverBar;
- (void)unarchiveDiscoverMediaWithCompletionHandler:(void (^)(_Bool, SCDiscoverMediaBlobMetadata *, _Bool))arg1;
@end

