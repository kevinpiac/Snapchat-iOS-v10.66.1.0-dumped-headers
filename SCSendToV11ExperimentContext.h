//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToV11ExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _pillEnabled;
    _Bool _friendsAZEnabled;
    _Bool _updatedSearchEnabled;
    _Bool _updatedConfirmationBarBehaviorEnabled;
    _Bool _updatedAddFriendsEnabled;
    _Bool _removeSearchAddFriendsIf7FriendsOrMoreEnabled;
    long long _searchBarButton;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)experimentName;
@property(readonly, nonatomic) _Bool friendsAZEnabled; // @synthesize friendsAZEnabled=_friendsAZEnabled;
@property(readonly, nonatomic) _Bool pillEnabled; // @synthesize pillEnabled=_pillEnabled;
@property(readonly, nonatomic) _Bool removeSearchAddFriendsIf7FriendsOrMoreEnabled; // @synthesize removeSearchAddFriendsIf7FriendsOrMoreEnabled=_removeSearchAddFriendsIf7FriendsOrMoreEnabled;
@property(readonly, nonatomic) long long searchBarButton; // @synthesize searchBarButton=_searchBarButton;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool updatedAddFriendsEnabled; // @synthesize updatedAddFriendsEnabled=_updatedAddFriendsEnabled;
@property(readonly, nonatomic) _Bool updatedConfirmationBarBehaviorEnabled; // @synthesize updatedConfirmationBarBehaviorEnabled=_updatedConfirmationBarBehaviorEnabled;
@property(readonly, nonatomic) _Bool updatedSearchEnabled; // @synthesize updatedSearchEnabled=_updatedSearchEnabled;

@end

