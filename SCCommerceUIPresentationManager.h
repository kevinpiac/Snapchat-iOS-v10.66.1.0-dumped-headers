//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceUIPresentationLayerDismissalDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol SCCommerceUIPresentationManagerDelegate;

@interface SCCommerceUIPresentationManager : NSObject <SCCommerceUIPresentationLayerDismissalDelegate>
{
    id <SCCommerceUIPresentationManagerDelegate> _delegate;
    NSMutableArray *_presentedLayers;
}

- (void).cxx_destruct;
- (id)_layerForPresentationStyle:(unsigned long long)arg1;
@property(nonatomic) __weak id <SCCommerceUIPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissLayer:(id)arg1 trigger:(unsigned long long)arg2;
- (void)dismissView:(id)arg1;
- (void)presentView:(id)arg1 inView:(id)arg2 presentationStyle:(unsigned long long)arg3;
@property(retain, nonatomic) NSMutableArray *presentedLayers; // @synthesize presentedLayers=_presentedLayers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

