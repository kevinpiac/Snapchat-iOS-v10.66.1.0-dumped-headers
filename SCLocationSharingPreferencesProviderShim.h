//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationSharingPreferencesListener-Protocol.h"
#import "SCLocationSharingPreferencesProvider-Protocol.h"

@class NSString, SCLocationSharingPreferences, SCLocationSharingPreferencesV1, SCObservable, SCPublishSubject;

@interface SCLocationSharingPreferencesProviderShim : NSObject <SCLocationSharingPreferencesListener, SCLocationSharingPreferencesProvider>
{
    SCLocationSharingPreferencesV1 *_preferences;
    SCPublishSubject *_preferencesChangePublisher;
    SCPublishSubject *_preferencesSyncPublisher;
}

- (void).cxx_destruct;
- (void)ensureHasPreferencesWithSource:(long long)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasEverSetPreferences;
- (_Bool)hasFetchedLocationPreferences;
- (id)initWithLocationSharingPreferences:(id)arg1;
- (_Bool)isBeingMutated;
- (void)locationSharingPreferencesSynced:(id)arg1;
- (void)locationSharingPreferencesUpdated:(id)arg1;
@property(readonly, nonatomic) SCLocationSharingPreferences *preferences;
@property(readonly, nonatomic) SCObservable *preferencesChangeObservable;
@property(readonly, nonatomic) SCObservable *preferencesSyncObservable;
- (void)revalidateCachedPreferencesWithSource:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

