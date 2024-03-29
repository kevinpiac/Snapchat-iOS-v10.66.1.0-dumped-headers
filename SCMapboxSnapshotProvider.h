//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapSnapshotProvider-Protocol.h"

@class NSString;
@protocol SCMapboxStyleProvider;

@interface SCMapboxSnapshotProvider : NSObject <SCMapSnapshotProvider>
{
    id <SCMapboxStyleProvider> _styleProvider;
}

- (void).cxx_destruct;
- (id)generateSnapshotForCamera:(id)arg1 imageSize:(struct CGSize)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithStyleProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

