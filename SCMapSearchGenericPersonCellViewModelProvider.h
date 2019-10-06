//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMapSearchGenericCellViewModelProvider.h"

#import "SCMapPeopleFriendsListener-Protocol.h"

@class NSArray, NSString;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapSearchGenericPersonCellViewModelProvider : SCMapSearchGenericCellViewModelProvider <SCMapPeopleFriendsListener>
{
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    NSArray *_viewModels;
}

- (void).cxx_destruct;
- (void)_filterOutBlockedAndDeletedPeopleFromViewModels;
- (id)initWithPersonViewModels:(id)arg1 mapPeopleProvider:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
