//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "SCIndexedTableViewDataSource-Protocol.h"
#import "SCIndexedTableViewDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchFriendsSubViewControllerDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SendTextControllerDelegate-Protocol.h"
#import "Subview-Protocol.h"

@class AddFriendsDelegateObject, EGORefreshTableHeaderView, Friend, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SCIndexedTableView, SCSearchFriendsSubViewController, SCUserSession, UILabel, UIView;
@protocol ContactsVCUserActionDelegate;

@interface ContactsViewController : UIViewController <SCSnapchattersDataRequestListener, EGORefreshTableHeaderDelegate, SCFriendProfileCellViewDelegate, SCIndexedTableViewDataSource, SCIndexedTableViewDelegate, SCSearchFriendsSubViewControllerDelegate, SendTextControllerDelegate, Subview, SCPageNameLogging>
{
    UILabel *_subTextLabel;
    UIView *_subTextLabelSeparator;
    SCUserSession *_userSession;
    NSSet *_snapchatterSet;
    NSSet *_nonSnapchatterSet;
    NSSet *_suggestionSet;
    NSSet *_officialAccountsSuggestionSet;
    NSSet *_publishersSuggestionSet;
    NSMutableDictionary *_showMoreRowsMap;
    _Bool _forceHideSubtextLabel;
    _Bool _disablePullToRefresh;
    _Bool _hasInteractedWithTable;
    _Bool _reloading;
    int _context;
    AddFriendsDelegateObject *_addFriendsDelegate;
    id <ContactsVCUserActionDelegate> _superViewDelegate;
    NSMutableOrderedSet *_friendsSeenIds;
    NSMutableArray *_selectedFriends;
    unsigned long long _tableViewType;
    NSArray *_snapchattersFriendsList;
    NSArray *_nonSnapchattersFriendsList;
    NSArray *_outOfContactsSuggestionList;
    NSArray *_officialAccountsSuggestionList;
    NSArray *_publishersSuggestionList;
    Friend *_friendBeingInvited;
    NSMutableSet *_temporarilyAddedFriends;
    SCIndexedTableView *_unAddedContactsTableView;
    EGORefreshTableHeaderView *_refreshHeaderView;
    SCSearchFriendsSubViewController *_searchFriendsSVC;
    struct UIEdgeInsets _contentInset;
}

+ (id)contactsContext;
+ (id)searchContext;
- (void).cxx_destruct;
- (id)_formatSubLabelTextForPhoneNumber:(id)arg1;
- (id)_newFriendProfileCellConfigurationWithFriend:(id)arg1;
- (_Bool)_shouldShowAllRowsInSection:(long long)arg1 withSectionKey:(id)arg2;
- (void)_showMoreRowsInSection:(long long)arg1 withSectionKey:(id)arg2;
- (void)addFindFriendsObservers;
@property(nonatomic) __weak AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
- (id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3;
- (void)configTableViewWithSnapchattersList:(id)arg1 nonSnapchattersList:(id)arg2 outOfContactsSuggestions:(id)arg3 officialAccountsSuggestions:(id)arg4 publishersSuggestions:(id)arg5 withTemporarilyAddedFriends:(_Bool)arg6;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) int context; // @synthesize context=_context;
- (id)createSubTextView:(id)arg1;
- (void)dealloc;
- (void)didBeginEditingSearchBox;
- (void)didDismissSearch;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didFindFriends:(_Bool)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
@property(nonatomic) _Bool disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
@property(nonatomic) _Bool forceHideSubtextLabel; // @synthesize forceHideSubtextLabel=_forceHideSubtextLabel;
@property(nonatomic) __weak Friend *friendBeingInvited; // @synthesize friendBeingInvited=_friendBeingInvited;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
@property(retain, nonatomic) NSMutableOrderedSet *friendsSeenIds; // @synthesize friendsSeenIds=_friendsSeenIds;
- (struct UIEdgeInsets)getContentInset;
- (id)getMyFriendCellForFriend:(id)arg1 onTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2;
- (void)handleChangeToFindFriendsResults:(id)arg1;
@property(nonatomic) _Bool hasInteractedWithTable; // @synthesize hasInteractedWithTable=_hasInteractedWithTable;
- (void)hideSubTextLabelAndSeparator;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isFriendSelectedToAdd:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) NSArray *nonSnapchattersFriendsList; // @synthesize nonSnapchattersFriendsList=_nonSnapchattersFriendsList;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSArray *officialAccountsSuggestionList; // @synthesize officialAccountsSuggestionList=_officialAccountsSuggestionList;
@property(retain, nonatomic) NSArray *outOfContactsSuggestionList; // @synthesize outOfContactsSuggestionList=_outOfContactsSuggestionList;
- (id)pageName;
- (id)pageViewName;
@property(retain, nonatomic) NSArray *publishersSuggestionList; // @synthesize publishersSuggestionList=_publishersSuggestionList;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
- (void)refreshSearchBarHidden;
- (void)reloadData;
- (void)reloadDataWithTemporarilyAddedFriends:(_Bool)arg1;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
- (void)removeFindFriendsObservers;
- (void)resetFriendFilter:(unsigned long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) SCSearchFriendsSubViewController *searchFriendsSVC; // @synthesize searchFriendsSVC=_searchFriendsSVC;
- (void)selectMultiFriends:(id)arg1;
@property(retain, nonatomic) NSMutableArray *selectedFriends; // @synthesize selectedFriends=_selectedFriends;
- (void)sendInvitesToFriend:(id)arg1 profileCellView:(id)arg2;
- (void)sendTextController:(id)arg1 completedWithStatus:(int)arg2;
@property(retain, nonatomic) NSArray *snapchattersFriendsList; // @synthesize snapchattersFriendsList=_snapchattersFriendsList;
@property(nonatomic) __weak id <ContactsVCUserActionDelegate> superViewDelegate; // @synthesize superViewDelegate=_superViewDelegate;
- (void)setTableBounce:(_Bool)arg1;
@property(nonatomic) unsigned long long tableViewType; // @synthesize tableViewType=_tableViewType;
@property(retain, nonatomic) NSMutableSet *temporarilyAddedFriends; // @synthesize temporarilyAddedFriends=_temporarilyAddedFriends;
@property(retain, nonatomic) SCIndexedTableView *unAddedContactsTableView; // @synthesize unAddedContactsTableView=_unAddedContactsTableView;
- (id)setupSectionToUnindexedFriendMapWithTemporarilyAddedFriends:(_Bool)arg1;
- (void)subviewWillAppear;
- (id)tableView:(id)arg1 cellForViewModel:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectFooterInSection:(long long)arg2 withSectionKey:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 maxNumberOfRowsInSection:(long long)arg2 withSectionKey:(id)arg3;
- (id)tableView:(id)arg1 textForFooterInSection:(long long)arg2 withSectionKey:(id)arg3;
- (void)toggleFriendToAdd:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

