//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUploadLocationsProvider-Protocol.h"

@class NSString;
@protocol SCRequestManager;

@interface SCFsnProxyUploadLocationsProvider : NSObject <SCUploadLocationsProvider>
{
    id <SCRequestManager> _requestManager;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (void)uploadLocationsWithCallbackPerformer:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
