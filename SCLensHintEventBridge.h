//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAEffectComponentListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensHintListenerAnnouncer;

@interface SCLensHintEventBridge : NSObject <SCTraceEnabled, LSAEffectComponentListener>
{
    SCLensHintListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (id)init;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

