//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSArray, NSString, SCCommerceScopedOptionsDataCoordinator, SCEventListenerAnnouncer, SCQueuePerformer, SCUserSession, UIColor;
@protocol SCCommerceProductViewModel, SCCompositeNetworkImageDownloading;

@interface SCCommercePDPImageViewModelProvider : NSObject <SCEventListener, SCEventAnnouncing>
{
    SCCommerceScopedOptionsDataCoordinator *_scopedOptionsDataCoordinator;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_queuePerformer;
    id <SCCompositeNetworkImageDownloading> _compositeImageDownloader;
    SCUserSession *_userSession;
    NSArray *_imageModels;
    id <SCCommerceProductViewModel> _productViewModel;
    UIColor *_tintColor;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_compositeNetworkImageModelForIndex:(unsigned long long)arg1;
- (void)_reloadBitmojiImageModelsIfNeeded;
- (void)_reloadImageModels;
- (void)addListener:(id)arg1;
- (void)announceUpdate;
- (void)clearCacheContent;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) NSArray *imageModels; // @synthesize imageModels=_imageModels;
- (id)initWithProductViewModel:(id)arg1 scopedOptionsDataCoordinator:(id)arg2 imageDownloader:(id)arg3 userSession:(id)arg4;
@property(retain, nonatomic) id <SCCommerceProductViewModel> productViewModel; // @synthesize productViewModel=_productViewModel;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

