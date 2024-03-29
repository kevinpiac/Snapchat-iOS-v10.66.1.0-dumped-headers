//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCLifestyleCategoriesService, SCQueuePerformer;

@interface SCLifestyleCategoriesFeatureManager : NSObject
{
    SCLifestyleCategoriesService *_lifestyleCategoriesService;
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_currentSelections;
    NSMutableDictionary *_updatedUserInterests;
}

- (void).cxx_destruct;
- (void)_updateCurrentSelections:(id)arg1 shouldRevertValue:(_Bool)arg2;
- (void)fetchLifestyleCategories:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithLifestyleCategoriesService:(id)arg1;
- (void)logLifestyleCategoriesPageViewEvent:(double)arg1;
- (void)updateLifestyleCategories:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateUserInterestLocally:(id)arg1;

@end

