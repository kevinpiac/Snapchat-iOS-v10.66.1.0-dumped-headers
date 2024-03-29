//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SCReceiveNotificationsFromSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCPageNameLogging>
{
    long long _receiveNotifsFromSetting;
    UITableView *_table;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getTitle;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pageViewName;
@property(nonatomic) long long receiveNotifsFromSetting; // @synthesize receiveNotifsFromSetting=_receiveNotifsFromSetting;
- (void)saveSetting;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

