//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSNumber, SCStickerPickerDataSourceUpdateHint;

@protocol SCStickerPickerView <NSObject>
- (void)animateViewsInWithDuration:(double)arg1 completion:(void (^)(void))arg2;
- (void)animateViewsOutWithDuration:(double)arg1 completion:(void (^)(void))arg2;
- (void)close;
- (void)openAtCategory:(NSIndexPath *)arg1 stickerOffset:(NSNumber *)arg2;
- (void)prepareToAnimateViewsInIfNeeded;
- (void)reloadDataWithDataSourceUpdateHint:(SCStickerPickerDataSourceUpdateHint *)arg1;
- (void)reloadDataWithDataSourceUpdateHint:(SCStickerPickerDataSourceUpdateHint *)arg1 shouldRefreshSuperCategoryIcons:(_Bool)arg2;
@end

