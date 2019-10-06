//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCPreviewFilterItem, SCSmartCarouselFilterArranger;

@protocol SCSmartCarouselFilterArrangerDelegate <NSObject>
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didInsertFilterAtIndex:(long long)arg2 filterItem:(SCPreviewFilterItem *)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didRemoveFilter:(SCPreviewFilterItem *)arg2 atIndex:(long long)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didUpdateFilterName:(NSString *)arg2 config:(NSDictionary *)arg3;
- (void)filterArrangerDidChangeVisualFilterNamesProvider:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArrangerDidReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArrangerWillReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
@end
