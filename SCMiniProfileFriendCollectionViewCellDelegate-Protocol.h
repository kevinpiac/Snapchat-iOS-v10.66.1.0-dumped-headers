//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, SCMiniProfileFriendCollectionViewCell, UIView;

@protocol SCMiniProfileFriendCollectionViewCellDelegate <NSObject>
- (void)friendCollectionViewCell:(SCMiniProfileFriendCollectionViewCell *)arg1 didTapAddFriend:(Friend *)arg2;
- (void)friendCollectionViewCell:(SCMiniProfileFriendCollectionViewCell *)arg1 didTapStoryIconView:(UIView *)arg2;

@optional
- (void)friendCollectionViewCellDidLongPress:(SCMiniProfileFriendCollectionViewCell *)arg1;
@end
