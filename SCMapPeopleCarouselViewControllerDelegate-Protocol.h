//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapPeopleCarouselViewController, SCMapPerson;

@protocol SCMapPeopleCarouselViewControllerDelegate <NSObject>
- (void)mapPeopleCarouselViewController:(SCMapPeopleCarouselViewController *)arg1 didShowPerson:(SCMapPerson *)arg2 actionType:(long long)arg3;
- (void)mapPeopleCarouselViewControllerWantsToBeDismissed:(SCMapPeopleCarouselViewController *)arg1;
@end

