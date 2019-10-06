//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacyFeedHeaderPromptStateMigrator, SCLegacyFeedHeaderPromptStateServices, SCServicesExposer, SCUserSessionScope;
@protocol SCPerforming;

@interface SCFeedHeaderPromptEntryPoint : SCEntryPoint
{
    id <SCPerforming> _performer;
    SCLegacyFeedHeaderPromptStateMigrator *_legacyStateMigrator;
    SCUserSessionScope *_userSessionScope;
    SCLegacyFeedHeaderPromptStateServices *_legacyFeedHeaderPromptStateServices;
    SCServicesExposer *_feedHeaderPromptServicesExposer;
}

- (void).cxx_destruct;
- (void)_migrateLegacyStates;
- (void)_migrateLegacyStatesIfNecessary;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *feedHeaderPromptServicesExposer; // @synthesize feedHeaderPromptServicesExposer=_feedHeaderPromptServicesExposer;
@property(nonatomic) __weak SCLegacyFeedHeaderPromptStateServices *legacyFeedHeaderPromptStateServices; // @synthesize legacyFeedHeaderPromptStateServices=_legacyFeedHeaderPromptStateServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
