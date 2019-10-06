//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyItemDownloading-Protocol.h"

@class NSString, SCLazy;

@interface SCSnapchattersLabelInfoProvider : NSObject <SCLegacyItemDownloading>
{
    SCLazy *_friendScoreProvider;
}

- (void).cxx_destruct;
- (id)initWithFriendScoreProvider:(id)arg1;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)loadItem:(id)arg1 itemRemoteDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)recordConsumptionOfTrackingId:(id)arg1;
- (void)resetCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
