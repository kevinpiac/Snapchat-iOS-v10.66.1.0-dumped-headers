//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCCloudSyncTriggerUserContext, SCUserSession, UIViewController;

@interface SCGalleryCreateStoryWithItemsOperation : NSObject
{
    SCUserSession *_userSession;
    NSArray *_selectionItems;
    UIViewController *_containerViewController;
    SCCloudSyncTriggerUserContext *_context;
    NSArray *_selectedSnaps;
    NSString *_storyDisplayName;
}

- (void).cxx_destruct;
- (void)_prepareMedia:(CDUnknownBlockType)arg1;
- (id)initWithSelectionItems:(id)arg1 selectedSnaps:(id)arg2 storyDisplayName:(id)arg3 containerViewController:(id)arg4 context:(id)arg5 userSession:(id)arg6;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

