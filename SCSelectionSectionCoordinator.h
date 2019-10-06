//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchQueryCoordinating-Protocol.h"

@class NSString, SCSearchNavigationCoordinator, SCSearchQuery;
@protocol SCSelectionSectionConfiguration;

@interface SCSelectionSectionCoordinator : NSObject <SCSearchQueryCoordinating>
{
    id <SCSelectionSectionConfiguration> _configuration;
    _Bool _isLoading;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
}

- (void).cxx_destruct;
- (_Bool)canPerformQuery:(id)arg1;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
- (id)initWithConfiguration:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

