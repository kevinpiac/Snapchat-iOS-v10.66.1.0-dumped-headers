//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@protocol SCIndexedTableViewDelegate <UITableViewDelegate>
- (void)tableView:(UITableView *)arg1 didSelectFooterInSection:(long long)arg2 withSectionKey:(NSString *)arg3;
- (long long)tableView:(UITableView *)arg1 maxNumberOfRowsInSection:(long long)arg2 withSectionKey:(NSString *)arg3;
- (NSString *)tableView:(UITableView *)arg1 textForFooterInSection:(long long)arg2 withSectionKey:(NSString *)arg3;
@end

