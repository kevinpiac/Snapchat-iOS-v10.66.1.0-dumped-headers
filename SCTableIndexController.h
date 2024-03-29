//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCTableIndex;

@interface SCTableIndexController : NSObject
{
    double _scrollViewOriginMinY;
    double _lastYOffset;
    double _lastRecordedYOffsetTime;
    double _lastTopOffset;
    double _lastBottomOffset;
    SCTableIndex *_tableIndexView;
}

- (void).cxx_destruct;
- (void)_updatescrollSpeedWithOffset:(double)arg1;
- (id)initWithTableIndexConfiguration:(id)arg1;
- (struct CGPoint)scrollBarOriginRelativeToTableIndex;
- (void)setupTableIndexLayoutContraintsWithParentScrollView:(id)arg1 topOffset:(double)arg2;
- (void)setupTableIndexLayoutContraintsWithParentScrollView:(id)arg1 topOffset:(double)arg2 bottomOffset:(double)arg3;
- (void)tableIndexDidEndScrolling;
@property(readonly, nonatomic) SCTableIndex *tableIndexView; // @synthesize tableIndexView=_tableIndexView;
- (void)updateTableIndexPositionWithParentScrollView:(id)arg1 topOffset:(double)arg2 animate:(_Bool)arg3;
- (void)updateTableIndexPositionWithParentScrollView:(id)arg1 topOffset:(double)arg2 bottomOffset:(double)arg3 animate:(_Bool)arg4;
- (void)updateTableIndexWithHiddenFrame:(struct CGRect)arg1 padding:(double)arg2;

@end

