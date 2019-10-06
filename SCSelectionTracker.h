//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, SCBehaviorSubject, SCLazy, SCPublishSubject;
@protocol OS_dispatch_queue;

@interface SCSelectionTracker : NSObject
{
    NSMutableOrderedSet *_selectionItemOrderedSet;
    NSMutableDictionary *_selectionItemMap;
    SCPublishSubject *_itemToStateMapPublishSubject;
    SCBehaviorSubject *_participantsBehaviorSubject;
    SCLazy *_lazySelectedParticipantsObservable;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (_Bool)_isSelectionItemValid:(id)arg1;
- (void)_nextSelectedParticipants;
- (id)_orderedSelectedParticipants;
- (id)deltaSelectionStateObservable;
- (id)init;
- (id)orderedSelectedItems;
- (id)orderedSelectedParticipants;
- (id)selectedParticipantsObservable;
- (struct NSDictionary *)selectionStatesForIdentifiers:(id)arg1;
- (void)setSelectionItem:(id)arg1 isSelected:(_Bool)arg2;
- (void)setSelectionItems:(id)arg1 isSelected:(_Bool)arg2;

@end
