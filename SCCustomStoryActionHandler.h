//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCLazy, UIViewController;
@protocol SCPrivateStoriesSelectionPresenting;

@interface SCCustomStoryActionHandler : NSObject <SCActionHandling>
{
    id <SCPrivateStoriesSelectionPresenting> _privateStoriesSelectionPresenter;
    SCLazy *_customStoriesDataMutator;
    SCLazy *_customStoriesDataFetcher;
    NSString *_currentUsername;
    NSString *_currentUserId;
    NSString *_currentDisplayName;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_blockCustomStoryWithPublicationId:(id)arg1;
- (void)_createPrivateStoryWithStoryInfo:(id)arg1 displayName:(id)arg2;
- (void)_dismissViewController;
- (void)_leaveCustomStoryWithPublicationId:(id)arg1;
- (void)_renamePrivateStoryWithStoryIdentifier:(id)arg1 storyDisplayName:(id)arg2;
- (void)_saveViewersChangeWithStoryInfo:(id)arg1;
- (void)_showPrivateStoryCreationDialogWithStoryInfo:(id)arg1;
- (void)_updateCustomStoryMetadataWithStoryIdentifier:(id)arg1 displayName:(id)arg2 viewerIdsPermitted:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPrivateStoriesSelectionPresenter:(id)arg1 customStoriesDataMutator:(id)arg2 customStoriesDataFetcher:(id)arg3 currentUsername:(id)arg4 currentUserId:(id)arg5 currentUserDisplayname:(id)arg6;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

