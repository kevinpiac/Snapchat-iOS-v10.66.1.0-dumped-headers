//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedSectionExtension-Protocol.h"

@class NSString, SCDiscoverFeedForYouRemoteSectionParser;

@interface SCDiscoverFeedForYouExtension : NSObject <SCDiscoverFeedSectionExtension>
{
    SCDiscoverFeedForYouRemoteSectionParser *_sectionParser;
}

- (void).cxx_destruct;
- (id)collectionViewSectionCreators;
- (id)dataMutators;
- (id)initWithExperimentManager:(id)arg1 featureSettingsManager:(id)arg2;
- (id)localSectionDescriptorProviders;
- (id)loggingParsers;
- (id)remoteSectionProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

