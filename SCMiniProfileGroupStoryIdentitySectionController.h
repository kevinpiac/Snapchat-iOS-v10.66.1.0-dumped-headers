//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileGroupStoryIdentityRowControllerDelegate-Protocol.h"

@class SCStoriesCustomStoryMetadata, SCUserSession;
@protocol SCMiniProfileGroupStoryIdentitySectionControllerDelegate;

@interface SCMiniProfileGroupStoryIdentitySectionController : SCMiniProfileSectionController <SCMiniProfileGroupStoryIdentityRowControllerDelegate>
{
    SCUserSession *_userSession;
    SCStoriesCustomStoryMetadata *_customStory;
    id <SCMiniProfileGroupStoryIdentitySectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)groupStoryIdentityRowController:(id)arg1 didTapThumbnailView:(id)arg2;
- (id)initWithUserSession:(id)arg1 customStory:(id)arg2 delegate:(id)arg3;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;

@end

