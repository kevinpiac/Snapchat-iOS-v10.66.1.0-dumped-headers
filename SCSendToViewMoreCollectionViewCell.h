//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCSectionKitCollectionViewViewMoreActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCShapeView, UILabel;
@protocol SCSectionKitCollectionViewViewMoreActionableDelegate;

@interface SCSendToViewMoreCollectionViewCell : UICollectionViewCell <SCSectionKitCollectionViewViewMoreActionable, SCViewModelConfigurable>
{
    SCShapeView *_backgroundView;
    UILabel *_viewMoreLabel;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_applyShadowIfNeeded;
- (void)_handleTap;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

