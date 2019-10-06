//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCCloudSyncTriggerUserContext, SCUserSession, UIViewController;
@protocol SCGalleryEntry;

@interface SCGalleryAddItemsToStoryOperation : NSObject
{
    SCUserSession *_userSession;
    id <SCGalleryEntry> _galleryStoryEntry;
    NSArray *_selectionItems;
    UIViewController *_containerViewController;
    SCCloudSyncTriggerUserContext *_context;
    NSArray *_selectedSnaps;
}

- (void).cxx_destruct;
- (id)initWithGalleryStoryEntry:(id)arg1 selectionItems:(id)arg2 selectedSnaps:(id)arg3 containerViewController:(id)arg4 context:(id)arg5 userSession:(id)arg6;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

