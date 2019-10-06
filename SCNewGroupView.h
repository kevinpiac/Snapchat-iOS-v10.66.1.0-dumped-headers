//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCSendToScrollView, UICollectionView;

@interface SCNewGroupView : UIView <SCShakeToReportDelegate>
{
    double _scrollViewBottomOffset;
    double _scrollViewTopOffset;
    SCSendToScrollView *_scrollView;
    _Bool _hideScrollView;
    double _topSectionOffset;
    UICollectionView *_contentCollectionView;
    double _keyboardHeight;
    struct UIEdgeInsets _layoutInset;
}

- (void).cxx_destruct;
- (void)_updateContentCollectionFrame;
- (void)_updateFriendsTableIndexFrame;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (id)defaultProjectNameV2;
- (void)hideScrollbar:(_Bool)arg1;
- (id)initWithIndexView:(id)arg1 topSectionOffset:(double)arg2 scrollbarBottomOffset:(double)arg3 backgroundColor:(id)arg4;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) struct UIEdgeInsets layoutInset; // @synthesize layoutInset=_layoutInset;
- (void)layoutSubviews;
- (void)updateTopSectionOffset:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
