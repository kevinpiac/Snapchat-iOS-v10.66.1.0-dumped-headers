//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCRoundedCellContentView, UIView;
@protocol SCGroupStoryGeofencePrivacyCellDelegate;

@interface SCGroupStoryGeofencePrivacyCell : UITableViewCell
{
    UIView *_containerView;
    UIView *_bottomBorder;
    SCRoundedCellContentView *_friendsView;
    SCRoundedCellContentView *_friendsOfFriendsView;
    long long _privacyType;
    id <SCGroupStoryGeofencePrivacyCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_setupFriendsOfFriendsView;
- (void)_setupFriendsView;
- (void)_setupSubviews;
- (void)_swapSelectedPrivacy;
- (_Bool)_tappedFriendsViewForPoint:(struct CGPoint)arg1;
@property(nonatomic) __weak id <SCGroupStoryGeofencePrivacyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTapForPoint:(struct CGPoint)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

