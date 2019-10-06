//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLoggerProtocol-Protocol.h"

@class NSString, SCDiscoverFeedLogger;
@protocol SCLensExplorerLoggerUtils, SCLensExplorerStudySettingsProviderProtocol;

@interface SCLensExplorerEventsLogger : NSObject <SCLensExplorerLoggerProtocol>
{
    SCDiscoverFeedLogger *_discoverFeedLogger;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingsProvider;
    id <SCLensExplorerLoggerUtils> _loggingUtils;
}

- (void).cxx_destruct;
- (void)flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2 extraData:(id)arg3;
- (id)initWithQueue:(id)arg1 experimentManager:(id)arg2 snapTokenManager:(id)arg3 requestManager:(id)arg4 studySettingsProvider:(id)arg5;
- (id)lensExplorerStudySettings;
- (void)logEvent:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) id <SCLensExplorerLoggerUtils> loggingUtils; // @synthesize loggingUtils=_loggingUtils;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

