//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCCommerceBitmojiViewModelProvider, SCCommerceSession, SCOperaPage, SCUserSession, SOJUCommerceProductInfo;
@protocol NavigationDelegate;

@interface SCCommerceProductOperaLayer : NSObject <SCOperaLayer>
{
    SCOperaPage *_page;
    _Bool _shouldPostDismissalEvent;
    NSString *_productId;
    SOJUCommerceProductInfo *_productInfo;
    NSString *_discoverEditionName;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    SCCommerceBitmojiViewModelProvider *_bitmojiViewModelProvider;
    id <NavigationDelegate> _navigationDelegate;
    unsigned long long _presentedViewType;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCCommerceBitmojiViewModelProvider *bitmojiViewModelProvider; // @synthesize bitmojiViewModelProvider=_bitmojiViewModelProvider;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(readonly) NSString *discoverEditionName; // @synthesize discoverEditionName=_discoverEditionName;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (id)page;
@property(readonly, nonatomic) unsigned long long presentedViewType; // @synthesize presentedViewType=_presentedViewType;
@property(readonly) NSString *productId; // @synthesize productId=_productId;
@property(readonly) SOJUCommerceProductInfo *productInfo; // @synthesize productInfo=_productInfo;
- (void)setPage:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPostDismissalEvent; // @synthesize shouldPostDismissalEvent=_shouldPostDismissalEvent;
- (unsigned long long)type;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

