//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableIndexDelegate-Protocol.h"

@class NSString, SCTableIndexController, UIScrollView;
@protocol SCMediaDrawerGalleryTableIndexControllerDataSource, SCMediaDrawerGalleryTableIndexControllerDelegate;

@interface SCMediaDrawerGalleryTableIndexController : NSObject <SCTableIndexDelegate>
{
    SCTableIndexController *_tableIndexController;
    UIScrollView *_scrollViewToTrack;
    unsigned long long _animationSentinel;
    _Bool _isDragging;
    id <SCMediaDrawerGalleryTableIndexControllerDataSource> _dataSource;
    id <SCMediaDrawerGalleryTableIndexControllerDelegate> _delegate;
    double _topOffet;
}

- (void).cxx_destruct;
- (void)_hideTableIndexWithShouldDelay:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <SCMediaDrawerGalleryTableIndexControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCMediaDrawerGalleryTableIndexControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndScrolling;
- (void)didFinishLongPressingTableIndex;
- (void)getLabelTextWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideTableIndexAnimated;
- (id)initWithParentView:(id)arg1;
- (void)scrollToPercent:(double)arg1;
- (void)setScrollViewToTrack:(id)arg1 initialTopOffset:(double)arg2 initialBottomTopOffset:(double)arg3;
@property(nonatomic) double topOffet; // @synthesize topOffet=_topOffet;
- (void)showTableIndexAnimated;
- (struct CGRect)tableIndexFocusRect;
- (double)tableIndexOffset;
- (void)updateTableIndexPositionWithTopOffset:(double)arg1 bottomOffset:(double)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

