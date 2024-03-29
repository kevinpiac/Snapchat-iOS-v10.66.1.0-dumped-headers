//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedStoriesEverywhereService, SCEventListenerAnnouncer, SCExperimentManager, SCSearchActionButton, SCSearchBorderedImageView, SCSearchDynamicStory, SCUserSession, UIView;
@protocol SCImageDownloading, SCSearchStorySharePopupPresenterDelegate;

@interface SCSearchStorySharePopupPresenter : NSObject <SCEventAnnouncing>
{
    SCExperimentManager *_experimentManager;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchBorderedImageView *_coverImageView;
    SCSearchDynamicStory *_dynamicStory;
    SCActionModel *_actionModel;
    id <SCImageDownloading> _storyImageLoader;
    struct CGSize _thumbnailSize;
    SCSearchActionButton *_shareButton;
    UIView *_dynamicStorySourceView;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCUserSession *_userSession;
    id <SCSearchStorySharePopupPresenterDelegate> _delegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_actionButtonsWithDynamicStory:(id)arg1;
- (void)_didTapShareButton:(id)arg1;
- (void)_handleShareStoryWithUrl:(id)arg1;
- (void)_loadNetworkImage:(id)arg1;
- (void)_loadThumbnailMedia:(id)arg1;
- (void)_logSearchAction:(long long)arg1 forActionDestination:(id)arg2;
- (void)_logSendIfNecessary;
- (void)_sendStory;
- (void)_updateStoryThumbnail;
- (void)_updateWithImage:(id)arg1;
- (void)_watchStory;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <SCSearchStorySharePopupPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 thumbnailSize:(struct CGSize)arg2 dynamicStory:(id)arg3 dynamicStorySourceView:(id)arg4 actionModel:(id)arg5;
- (void)present;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

