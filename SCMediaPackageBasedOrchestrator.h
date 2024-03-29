//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaOrchestrating-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCPerforming, SCUploadMediaManaging;

@interface SCMediaPackageBasedOrchestrator : NSObject <SCMediaOrchestrating>
{
    id <SCPerforming> _performer;
    id <SCUploadMediaManaging> _uploadMediaManager;
    NSMutableDictionary *_mediaOrchestrationIdToState;
}

- (void).cxx_destruct;
- (id)initWithUploadMediaManager:(id)arg1 performer:(id)arg2;
- (id)registerNewMediaOrchestration;
- (void)resumeWithId:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadMediaPackage:(id)arg1 mediaOrchestrationId:(id)arg2 key:(id)arg3 iv:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

