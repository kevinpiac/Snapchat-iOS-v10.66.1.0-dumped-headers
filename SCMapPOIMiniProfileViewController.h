//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "SCMiniProfileStoryIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCMTPointOfInterest, SCMapLoggerSession, SCMapStoryViewModel, SCMapTapToPlayPOIMediaFetcher, SCOperaPresenter, SCSendToTransitionProvider, SCUserSession;
@protocol SCMapPOIMiniProfileViewControllerDelegate;

@interface SCMapPOIMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileStoryIdentitySectionControllerDelegate, SCOperaPresenterDelegate, SCSendToDelegate, SCSendToNavigationDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate>
{
    SCMapTapToPlayPOIMediaFetcher *_mediaFetcher;
    SCOperaPresenter *_operaPresenter;
    SCUserSession *_userSession;
    SCMTPointOfInterest *_poi;
    SCMapStoryViewModel *_storyViewModel;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCMapLoggerSession *_mapLoggerSession;
    id <SCMapPOIMiniProfileViewControllerDelegate> _delegate;
}

+ (void)_logURLShareForStoryType:(long long)arg1 mapSessionId:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_beginStoryPlaybackWithThumbnailView:(id)arg1;
- (void)_logMiniProfileView;
- (void)_presentLeadEditor;
- (id)_selectRecipientsConfiguration;
- (id)_sendPreviewViewModel;
- (void)_sendStory;
- (void)_setupWithPOI:(id)arg1 mapZoomLevel:(double)arg2 mapLoggerSession:(id)arg3;
- (void)_shareWebURL;
@property(nonatomic) __weak id <SCMapPOIMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 POI:(id)arg2 mapZoomLevel:(double)arg3 mapLoggerSession:(id)arg4;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (void)storyIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2;
- (void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
