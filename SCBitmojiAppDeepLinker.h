//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiAppDeepLinking-Protocol.h"

@class NSString;

@interface SCBitmojiAppDeepLinker : NSObject <SCBitmojiAppDeepLinking>
{
}

- (void)goToBitmojiAppStorePageWithCompletion:(CDUnknownBlockType)arg1;
- (void)goToBitmojiAppWithSource:(id)arg1 page:(unsigned long long)arg2 bitmojiService:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

