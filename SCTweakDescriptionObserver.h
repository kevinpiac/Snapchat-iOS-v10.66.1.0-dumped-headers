//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBTweakObserver-Protocol.h"

@class NSMapTable, NSString;

@interface SCTweakDescriptionObserver : NSObject <FBTweakObserver>
{
    NSMapTable *_tweakDescriptions;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (id)_descriptionForTweak:(id)arg1;
- (id)init;
- (void)setDescriptions:(id)arg1 forTweak:(id)arg2;
- (void)tweakDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
