//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCActionModel, SCOperaInteractionZoneLayerView;

@protocol SCOperaInteractionZoneLayerViewDelegate <NSObject>
- (void)didTapInteractionZoneTitleInLayerView:(SCOperaInteractionZoneLayerView *)arg1;
- (void)layerView:(SCOperaInteractionZoneLayerView *)arg1 didTriggerActionWithActionModel:(SCActionModel *)arg2 tapLocation:(struct CGPoint)arg3 itemIndex:(long long)arg4;
- (void)layerView:(SCOperaInteractionZoneLayerView *)arg1 scrolledItemIndexPath:(NSArray *)arg2 endItemActionModel:(SCActionModel *)arg3;
- (void)layerViewDidStartScrolling:(SCOperaInteractionZoneLayerView *)arg1;
@end

