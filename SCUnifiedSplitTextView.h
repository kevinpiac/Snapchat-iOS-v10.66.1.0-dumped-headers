//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCUnifiedSplitTextViewModel;
@protocol SCLegacyItemDownloading;

@interface SCUnifiedSplitTextView : UIView
{
    SCUnifiedSplitTextViewModel *_viewModel;
    id <SCLegacyItemDownloading> _infoFetcher;
}

+ (double)heightWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)_adjustLinearLayoutFrames:(id)arg1 index:(unsigned long long)arg2 adjustedWidth:(double)arg3;
- (id)_framesForComponentViews;
- (double)_spacingToNextItemForSubviewIndex:(long long)arg1;
- (void)_updateFetchedNetworkString:(id)arg1 textAttributes:(id)arg2 onView:(id)arg3 previousSeparator:(id)arg4;
@property(nonatomic) __weak id <SCLegacyItemDownloading> infoFetcher; // @synthesize infoFetcher=_infoFetcher;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(retain, nonatomic) SCUnifiedSplitTextViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

