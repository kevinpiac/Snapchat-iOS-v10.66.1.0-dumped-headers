//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMemoriesSinglePageHeaderBar.h"

@class SCExpandedButton;

@interface SCMemoriesSharedFolderHeaderBar : SCMemoriesSinglePageHeaderBar
{
    SCExpandedButton *_plusButton;
    unsigned long long _mode;
}

- (void).cxx_destruct;
- (void)_didPressPlusButton;
- (void)_setPlusButton;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 mode:(unsigned long long)arg3 delegate:(id)arg4;

@end

