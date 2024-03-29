//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGallerySelectionController;
@protocol SCGalleryEntry;

@protocol SCGallerySelectionControllerDelegate <NSObject>
- (void)selectionController:(SCGallerySelectionController *)arg1 shouldScrollToGalleryEntry:(id <SCGalleryEntry>)arg2;
- (void)selectionControllerDidEnterSelectionMode:(SCGallerySelectionController *)arg1;
- (void)selectionControllerDidExitSelectionMode:(SCGallerySelectionController *)arg1;
@end

