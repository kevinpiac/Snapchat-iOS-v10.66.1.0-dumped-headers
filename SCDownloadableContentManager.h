//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDownloadableContentManagerBase.h"

@class SCSessionRequestManager;

@interface SCDownloadableContentManager : SCDownloadableContentManagerBase
{
    SCSessionRequestManager *_requestManager;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)errorDomain;
- (id)initWithRequestManager:(id)arg1;
- (id)requestManager;

@end
