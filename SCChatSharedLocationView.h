//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SCChatSharedLocationViewModel, SCFriendLocationSnapshotMapView, UILabel;
@protocol SCChatSharedLocationViewDelegate;

@interface SCChatSharedLocationView : UIView
{
    NSArray *_buttons;
    NSString *_instanceIdentifier;
    UILabel *_statusLabel;
    SCFriendLocationSnapshotMapView *_mapView;
    SCChatSharedLocationViewModel *_viewModel;
    id <SCChatSharedLocationViewDelegate> _delegate;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_tappedButton:(id)arg1;
- (void)_tappedMap:(id)arg1;
@property(nonatomic) __weak id <SCChatSharedLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
@property(readonly, nonatomic) SCFriendLocationSnapshotMapView *mapView; // @synthesize mapView=_mapView;
- (void)prepareForReuseIfInstanceIdentifierChanged:(id)arg1;
@property(retain, nonatomic) SCChatSharedLocationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

@end

