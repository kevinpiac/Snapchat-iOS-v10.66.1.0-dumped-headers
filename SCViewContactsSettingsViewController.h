//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCSnapchattersContactService, UITableView;

@interface SCViewContactsSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate>
{
    SCSnapchattersContactService *_contactService;
    UITableView *_table;
    NSArray *_contactDisplayNames;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (void)_presentWebViewWithUrl:(id)arg1;
- (void)_reloadServerContacts:(id)arg1;
- (void)_reloadTable;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)getTitle;
- (id)initWithContactService:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

