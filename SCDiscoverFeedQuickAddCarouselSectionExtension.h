//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedSectionExtension-Protocol.h"

@class NSString, SCDiscoverFeedQuickAddCarouselSectionCreator;

@interface SCDiscoverFeedQuickAddCarouselSectionExtension : NSObject <SCDiscoverFeedSectionExtension>
{
    SCDiscoverFeedQuickAddCarouselSectionCreator *_sectionCreator;
}

- (void).cxx_destruct;
- (id)collectionViewSectionCreators;
- (id)dataMutators;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 userInfoProvider:(id)arg4 imageDownloader:(id)arg5 suggestionRankingCoordinator:(id)arg6 discoverFeedEventsAnnouncer:(id)arg7 userSession:(id)arg8;
- (id)localSectionDescriptorProviders;
- (id)loggingParsers;
- (id)remoteSectionProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

