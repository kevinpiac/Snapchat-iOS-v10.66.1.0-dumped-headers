//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UICollectionView, UIView;

@protocol SCLensExplorerContentProtocol <NSObject>
@property(readonly, nonatomic) UIView *backgroundRoundedView;
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(nonatomic) struct UIEdgeInsets contentInsets;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
@end

