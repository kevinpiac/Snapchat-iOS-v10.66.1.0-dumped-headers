//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, UILabel;

@interface SCSnapchatterChatInfoView : UIView <SCSnapchatterViewModelConfigurable>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    SCLazy *_secondaryIconImageView;
    id _viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

