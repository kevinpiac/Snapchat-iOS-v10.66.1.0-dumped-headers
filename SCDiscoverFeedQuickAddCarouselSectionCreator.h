//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedCollectionViewSectionCreating-Protocol.h"
#import "SCDiscoverFeedLocalSectionDescriptorProviding-Protocol.h"

@class NSString, SCAddFriendsQuickAddCarouselUpdateDecider, SCExperimentManager, SCLazy, SCSessionRequestManager;
@protocol SCEventAnnouncing, SCImageDownloading;

@interface SCDiscoverFeedQuickAddCarouselSectionCreator : NSObject <SCDiscoverFeedLocalSectionDescriptorProviding, SCDiscoverFeedCollectionViewSectionCreating>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_userInfoProvider;
    SCLazy *_suggestionRankingCoordinator;
    id <SCEventAnnouncing> _discoverFeedEventsAnnouncer;
    id <SCImageDownloading> _imageDownloader;
    SCExperimentManager *_experimentManager;
    SCSessionRequestManager *_sessionRequestManager;
    SCAddFriendsQuickAddCarouselUpdateDecider *_quickAddCarouselUpdateDecider;
}

- (void).cxx_destruct;
- (id)_createAddFriendsSectionDataProvider;
- (id)carouselSectionLayoutCalculator:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 userInfoProvider:(id)arg4 imageDownloader:(id)arg5 suggestionRankingCoordinator:(id)arg6 discoverFeedEventsAnnouncer:(id)arg7 experimentManager:(id)arg8 sessionRequestManager:(id)arg9;
- (id)localSectionDescriptorWithSource:(id)arg1;
- (CDUnknownBlockType)sectionDataProviderCreator;
- (id)sectionTitleForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

