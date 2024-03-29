//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCBehaviorSubject, SCLazy, SCObservable;

@interface SCUserSegmentsUpdater : NSObject
{
    SCLazy *_preferences;
    SCLazy *_allUpdates;
    SCBehaviorSubject *_userSegmentsObservable;
}

- (void).cxx_destruct;
- (void)_checkAllUpdatesForUserSegments:(id)arg1;
- (void)_subscribeAllUpdates;
- (void)_userSegmentsDidChange:(id)arg1;
- (id)_userSegmentsFromStringSet:(id)arg1;
- (id)initWithPreferences:(id)arg1 allUpdates:(id)arg2;
@property(readonly, nonatomic) SCObservable *userSegmentsObservable; // @synthesize userSegmentsObservable=_userSegmentsObservable;

@end

