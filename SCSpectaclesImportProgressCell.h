//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGListBindable-Protocol.h"

@class NSString, SCLoadingIndicatorView, UILabel;

@interface SCSpectaclesImportProgressCell : UICollectionViewCell <IGListBindable>
{
    UILabel *_label;
    SCLoadingIndicatorView *_loadingView;
}

+ (double)height;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
