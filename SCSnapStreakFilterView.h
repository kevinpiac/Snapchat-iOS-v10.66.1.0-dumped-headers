//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UILabel, UIView;

@interface SCSnapStreakFilterView : SCOverlayFilterView
{
    UIView *_streakView;
    UILabel *_streakLabel;
    long long _streakCount;
}

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
@property(nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;

@end

