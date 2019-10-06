//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSASnapcodeListener-Protocol.h"

@class LSASnapcodeComponentListenerAnnouncer, NSString;

@interface LSASnapcodeComponent : LSABaseComponent <LSASnapcodeListener>
{
    struct shared_ptr<LS::SnapcodeAnalyzer> _snapcodeAnalyzer;
    LSASnapcodeComponentListenerAnnouncer *_snapcodeComponentAnnouncer;
    struct shared_ptr<LSASnapcodeDelegateWrapper> _delegateWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)clearResources;
- (void)didRequestToTriggerAction;
- (id)initWithPerformer:(id)arg1;
- (id)lsaSnapcodeDataFromCoreScannedData:(const struct SnapcodeScannedData *)arg1;
- (void)removeListener:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (void)startSnapcodeTrackingWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSnapcodeTrackingWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

