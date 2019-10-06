//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol SCFeatureTeachingTooltipsDelegate, SCTeachingTooltip;

@protocol SCFeatureTeachingTooltips
@property(nonatomic) __weak id <SCFeatureTeachingTooltipsDelegate> delegate;
- (void)displayIfNeeded:(id <SCTeachingTooltip>)arg1 animated:(_Bool)arg2;
- (void)hide:(id <SCTeachingTooltip>)arg1 animated:(_Bool)arg2;
- (void)hideAll;
- (void)insertTooltip:(id <SCTeachingTooltip>)arg1;
- (void)removeTooltip:(id <SCTeachingTooltip>)arg1;
- (void)reset;
- (_Bool)someDisabled:(NSArray *)arg1;
- (_Bool)someDisplayed:(NSArray *)arg1;
- (_Bool)someEnabled:(NSArray *)arg1;
- (_Bool)someNotDisplayed:(NSArray *)arg1;
@end

