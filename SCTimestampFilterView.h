//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class NSDate, NSDateFormatter, SCTimestampMetadata, UIView;

@interface SCTimestampFilterView : SCOverlayFilterView
{
    SCTimestampMetadata *_timestampMetadata;
    UIView *_timestampViews[3];
    unsigned long long _currentStyle;
    UIView *_currentView;
    NSDateFormatter *_dateFormatter;
    NSDate *_date;
}

- (void).cxx_destruct;
- (void)_updateCurrentViewAndTransformWith:(struct CGAffineTransform)arg1;
- (void)_updateCurrentViewAndTransformWith:(struct CGAffineTransform)arg1 center:(struct CGPoint)arg2;
- (id)alphabeticView;
- (id)displayName;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
- (id)numericView;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (id)timestampView;

@end

