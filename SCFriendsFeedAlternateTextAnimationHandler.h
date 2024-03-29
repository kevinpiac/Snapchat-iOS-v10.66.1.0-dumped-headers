//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SCFriendsFeedAlternateTextAnimationHandler : NSObject <SCActionHandling>
{
    NSMutableDictionary *_animationMap;
    NSMutableSet *_animationPool;
}

- (void).cxx_destruct;
- (id)_animationWithSourceView:(id)arg1;
- (void)clearAnimationWithSourceView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

