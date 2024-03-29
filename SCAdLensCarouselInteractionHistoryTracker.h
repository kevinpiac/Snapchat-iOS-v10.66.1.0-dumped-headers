//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString, SCAdLensCarouselViewingStatus;

@interface SCAdLensCarouselInteractionHistoryTracker : NSObject <SCUserSessionScoped>
{
    NSMutableDictionary *_adIdentifierToLenCarouselMap;
    SCAdLensCarouselViewingStatus *_currentAdLensCarouselViewingStatus;
}

- (void).cxx_destruct;
- (id)adLensCarouselViewingStatusForAdIdentifier:(id)arg1;
- (void)adShow:(id)arg1 snapIndex:(long long)arg2;
- (id)init;
- (void)invalidate;
- (void)onLensCarouselViewed:(id)arg1;
- (void)resetViewingStatusForAdIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

