//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCExperimentManager;
@protocol SCDownloadableContentManaging;

@interface SCLegacyOnboardingOnDemandResourceDownloader : NSObject
{
    id <SCDownloadableContentManaging> _downloadManager;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_downloadSampleSnapIfNeeded;
- (id)initWithDownloadManager:(id)arg1 experimentManager:(id)arg2;
- (void)startDownloadingContentsIfNeeded;

@end
