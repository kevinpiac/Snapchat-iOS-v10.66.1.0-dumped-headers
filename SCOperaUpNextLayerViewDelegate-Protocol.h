//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCOperaUpNextLayerView;

@protocol SCOperaUpNextLayerViewDelegate <NSObject>
- (void)upNextLayerView:(SCOperaUpNextLayerView *)arg1 didAwakeWithAction:(long long)arg2;
- (void)upNextLayerView:(SCOperaUpNextLayerView *)arg1 didNavigateToItemWithItemId:(NSString *)arg2 orderedVisibleItemIds:(NSArray *)arg3 action:(long long)arg4;
- (void)upNextLayerView:(SCOperaUpNextLayerView *)arg1 didTapOnGroupWithId:(NSString *)arg2;
- (void)upNextLayerView:(SCOperaUpNextLayerView *)arg1 didUpdateActiveState:(long long)arg2;
- (void)upNextLayerView:(SCOperaUpNextLayerView *)arg1 didUpdateItemsWithOrderedVisibleItemIds:(NSArray *)arg2;
- (void)upNextLayerViewWantsToBeActive:(SCOperaUpNextLayerView *)arg1;
@end

