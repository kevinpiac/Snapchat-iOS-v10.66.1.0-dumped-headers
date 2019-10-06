//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSAComponentListenerAnnouncer, LSAQueuePerformer;

@interface LSABaseComponent : NSObject
{
    weak_ptr_ae78a97a _coreManager;
    LSAQueuePerformer *_performer;
    LSAComponentListenerAnnouncer *_announcer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak LSAComponentListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)clearResources;
@property(readonly, nonatomic) weak_ptr_ae78a97a coreManager; // @synthesize coreManager=_coreManager;
- (void)executeWithTrackingManagerBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2;
- (id)init;
- (id)initWithPerformer:(id)arg1;
@property(readonly, nonatomic) __weak LSAQueuePerformer *performer; // @synthesize performer=_performer;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;

@end

