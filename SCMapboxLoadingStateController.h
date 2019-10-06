//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMGLMapViewListener-Protocol.h"
#import "SCMapLoadingState-Protocol.h"

@class NSString, SCMapLoadingStateListenerAnnouncer;

@interface SCMapboxLoadingStateController : NSObject <SCMGLMapViewListener, SCMapLoadingState>
{
    _Bool _didLoadStyle;
    SCMapLoadingStateListenerAnnouncer *_loadingStateAnnouncer;
}

- (void).cxx_destruct;
- (_Bool)didLoadStyle;
- (id)initWithMapboxListenerAnnouncer:(id)arg1;
@property(retain, nonatomic) SCMapLoadingStateListenerAnnouncer *loadingStateAnnouncer; // @synthesize loadingStateAnnouncer=_loadingStateAnnouncer;
- (void)mapView:(id)arg1 didFinishLoadingStyle:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFinishRenderingFrame:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartLoadingMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

