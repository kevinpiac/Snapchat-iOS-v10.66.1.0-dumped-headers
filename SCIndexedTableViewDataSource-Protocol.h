//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell;

@protocol SCIndexedTableViewDataSource <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForViewModel:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
@end
