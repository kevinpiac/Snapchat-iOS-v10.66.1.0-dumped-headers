//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedCameraObjectCommandMapping-Protocol.h"

@class NSString, SCDisposableObserverLifecycle, SCLRUCache;
@protocol SCUnifiedCameraObjectCommandFactory;

@interface SCLensUnifiedCameraObjectCommandMapper : NSObject <SCUnifiedCameraObjectCommandMapping>
{
    id <SCUnifiedCameraObjectCommandFactory> _ucoCommandFactory;
    SCLRUCache *_cachedCommand;
    SCDisposableObserverLifecycle *_appLifecycleDisposable;
}

- (void).cxx_destruct;
- (id)_commonMetadataFromStackedCommandContainer:(id)arg1;
- (id)_descriptorWithVirtualLensCommand:(id)arg1;
- (struct CGRect)_leftCommandRectFromDualCommandSwipingOffset:(double)arg1;
- (struct CGRect)_rightCommandRectFromDualCommandSwipingOffset:(double)arg1;
- (void)_subscribeToAppLifecycle:(id)arg1;
- (id)_ucoCommandForContainer:(id)arg1 descriptors:(id)arg2 metadata:(id)arg3;
- (id)initWithUnifiedCameraObjectCommandFactory:(id)arg1 applicationLifecycleEvents:(id)arg2;
@property(readonly, nonatomic) __weak Class supportedCommandSubclass;
- (id)unifiedCameraObjectCommandFromStackedContainer:(id)arg1 isVideo:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
