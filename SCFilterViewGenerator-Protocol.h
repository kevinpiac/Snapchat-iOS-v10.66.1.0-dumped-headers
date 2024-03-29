//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, SCFilterView, SCPreviewFilterItem, SCSmartCarouselFilterArranger, SCUserSession;

@protocol SCFilterViewGenerator <NSObject>
- (SCFilterView *)filterViewForItem:(SCPreviewFilterItem *)arg1 filterViewDict:(NSMutableDictionary *)arg2 unfilteredView:(SCFilterView *)arg3 bounds:(struct CGRect)arg4 filterArranger:(SCSmartCarouselFilterArranger *)arg5 filterStateDict:(NSMutableDictionary *)arg6 userSession:(SCUserSession *)arg7;
- (void)removeViewOfFilterItem:(SCPreviewFilterItem *)arg1 filterViewDict:(NSMutableDictionary *)arg2;
- (long long)zPositionForFilterItem:(SCPreviewFilterItem *)arg1 view:(SCFilterView *)arg2;
@end

