//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ScanHistoryCell.h"

@class Friend, SOJUScannableActionAddFriend;

@interface SCScanHistoryAddFriendCell : ScanHistoryCell
{
    SOJUScannableActionAddFriend *_addFriendAction;
    Friend *_friend;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mainLabel:(id)arg3 subLabel:(id)arg4 thirdLabel:(id)arg5 thumbnailWithURL:(id)arg6 scanSnapshotData:(id)arg7 scanData:(id)arg8 scannableAction:(id)arg9 userSession:(id)arg10;
- (void)processData;
- (void)updateViews;

@end

