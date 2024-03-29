//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSABitmoji3DListener-Protocol.h"

@class LSABitmoji3DComponentListenerAnnouncer, NSString;

@interface LSABitmoji3DComponent : LSABaseComponent <LSABitmoji3DListener>
{
    LSABitmoji3DComponentListenerAnnouncer *_bitmoji3DComponentAnnouncer;
    struct shared_ptr<LSABitmoji3DDelegateWrapper> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)didRequestMetadata;
- (id)initWithPerformer:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setBitmoji3DData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

