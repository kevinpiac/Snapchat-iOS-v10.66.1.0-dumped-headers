//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCFriendsTableIndex, SCHeader, UICollectionView;

@interface SCMyFriendsView : UIView
{
    SCHeader *_header;
    UICollectionView *_collectionView;
    SCFriendsTableIndex *_indexView;
    struct UIEdgeInsets _collectionViewLayoutInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets collectionViewLayoutInsets; // @synthesize collectionViewLayoutInsets=_collectionViewLayoutInsets;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCFriendsTableIndex *indexView; // @synthesize indexView=_indexView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

