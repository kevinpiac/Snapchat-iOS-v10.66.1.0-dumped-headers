//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapCarouselView;

@protocol SCMapCarouselViewDelegate <NSObject>

@optional
- (void)mapCarouselView:(SCMapCarouselView *)arg1 didShowViewAtIndex:(long long)arg2 actionType:(unsigned long long)arg3;
- (void)mapCarouselView:(SCMapCarouselView *)arg1 didStopShowingViewAtIndex:(long long)arg2;
- (void)mapCarouselView:(SCMapCarouselView *)arg1 willShowViewAtIndex:(long long)arg2;
@end

