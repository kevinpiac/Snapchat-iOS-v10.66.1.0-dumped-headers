//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCWebProxyLayer.h"

@protocol SCWebProxyHeaderTransformLayerDelegate;

@interface SCWebProxyHeaderTransformLayer : SCWebProxyLayer
{
    id <SCWebProxyHeaderTransformLayerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCWebProxyHeaderTransformLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1 delegate:(id)arg2;

@end

