//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBloopsPreviewsEmptyCell, UIScrollView;

@protocol SCBloopsPreviewsEmptyCellDelegate <NSObject>
- (void)bloopsEmptyViewStartAction:(SCBloopsPreviewsEmptyCell *)arg1;

@optional
- (void)previewsEmptyCell:(SCBloopsPreviewsEmptyCell *)arg1 didEndDragging:(UIScrollView *)arg2 willDecelerate:(_Bool)arg3;
- (void)previewsEmptyCell:(SCBloopsPreviewsEmptyCell *)arg1 didScroll:(UIScrollView *)arg2;
- (void)previewsEmptyCell:(SCBloopsPreviewsEmptyCell *)arg1 willBeginDragging:(UIScrollView *)arg2;
@end

