//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureTeachingTooltips-Protocol.h"

@class NSMutableSet, NSRecursiveLock;
@protocol SCFeatureTeachingTooltipsDelegate;

@interface SCFeatureTeachingTooltipsImpl : SCFeature <SCFeatureTeachingTooltips>
{
    NSMutableSet *_underlyingSet;
    NSRecursiveLock *_lock;
    id <SCFeatureTeachingTooltipsDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_currentTooltips;
@property(nonatomic) __weak id <SCFeatureTeachingTooltipsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayIfNeeded:(id)arg1 animated:(_Bool)arg2;
- (void)hide:(id)arg1 animated:(_Bool)arg2;
- (void)hideAll;
- (id)init;
- (void)insertTooltip:(id)arg1;
- (void)removeTooltip:(id)arg1;
- (void)reset;
- (_Bool)someDisabled:(id)arg1;
- (_Bool)someDisplayed:(id)arg1;
- (_Bool)someEnabled:(id)arg1;
- (_Bool)someNotDisplayed:(id)arg1;

@end

