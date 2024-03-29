//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensConversationMetadataProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy, SCReplyParameters, SCScopedAccess;

@interface SCLensConversationMetadataProviderImpl : NSObject <SCTraceEnabled, SCLensConversationMetadataProvider>
{
    SCScopedAccess *_scopedGroupManager;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_usernameToSnapchatterFetcher;
    SCReplyParameters *_replyParameters;
}

- (void).cxx_destruct;
- (void)currentRemoteUsers:(CDUnknownBlockType)arg1;
- (id)currentReplyUsername;
- (void)friendForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithScopedGroupManager:(id)arg1 snapchattersDataFetcher:(id)arg2 usernameToSnapchatterFetcher:(id)arg3;
- (_Bool)isInGroupChat;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

