//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCAddFriendsViewMoreViewDelegate-Protocol.h"
#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCAddFriendsViewMoreView;
@protocol SCSectionKitCollectionViewViewMoreActionableDelegate;

@interface SCAddFriendsViewMoreCollectionViewCell : UICollectionViewCell <SCAddFriendsViewMoreViewDelegate, SCViewModelConfigurable, SCRoundedCornerConfigurable, SCSectionKitCollectionViewViewMoreActionable>
{
    SCAddFriendsViewMoreView *_viewMoreView;
    id _viewModel;
    unsigned long long _roundedCorners;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)setRoundedCorner:(unsigned long long)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)viewMoreViewDidTapViewMore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

