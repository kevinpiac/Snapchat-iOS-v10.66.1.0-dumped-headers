//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol ContactsVCUserActionDelegate <NSObject>

@optional
- (void)contactsViewDidScroll:(UIScrollView *)arg1;
- (void)onFriendSelectionToggled;
- (void)startContactAccessWorkflow;
@end

