//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCameraBarButtonItem.h"

@class SCHovaTabBarMemoriesItem, SCTabBarMemoriesItemStatusController;

@interface SCMemoriesNavigationBarButtonItem : SCCameraBarButtonItem
{
    CDUnknownBlockType _actionHandler;
    SCTabBarMemoriesItemStatusController *_memoriesItemStatusController;
    SCHovaTabBarMemoriesItem *_tabItem;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (double)alpha;
- (void)buttonTapped:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) SCTabBarMemoriesItemStatusController *memoriesItemStatusController; // @synthesize memoriesItemStatusController=_memoriesItemStatusController;
- (void)setAlpha:(double)arg1;
@property(retain, nonatomic) SCHovaTabBarMemoriesItem *tabItem; // @synthesize tabItem=_tabItem;

@end
