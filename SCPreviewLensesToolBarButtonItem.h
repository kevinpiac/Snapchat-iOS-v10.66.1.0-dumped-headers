//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCPreviewToolBarButtonItem.h"

#import "SCPreviewLensesToolBarButtonItemViewModelDelegate-Protocol.h"

@class NSString;
@protocol SCPreviewLensesToolBarButtonItemViewModelProtocol;

@interface SCPreviewLensesToolBarButtonItem : SCPreviewToolBarButtonItem <SCPreviewLensesToolBarButtonItemViewModelDelegate>
{
    id <SCPreviewLensesToolBarButtonItemViewModelProtocol> _viewModel;
}

- (void).cxx_destruct;
- (void)applyBadgeStatusIfNeeded;
- (void)previewLensesToolBarItemViewModel:(id)arg1 didChangeNewLensesBadgeHidden:(_Bool)arg2;
@property(retain, nonatomic) id <SCPreviewLensesToolBarButtonItemViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void)toolButtonDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

