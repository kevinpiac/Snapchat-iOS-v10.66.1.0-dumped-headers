//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCameraToolbarItem;

@interface SCCameraToolbarButtonEventResult : NSObject
{
    _Bool _shouldBlockInteraction;
    _Bool _canBeSelected;
    _Bool _shouldBlockChangingSelected;
    SCCameraToolbarItem *_toolbarItem;
    SCCameraToolbarItem *_toolbarItemToSelect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canBeSelected; // @synthesize canBeSelected=_canBeSelected;
- (id)initWithToolbarItem:(id)arg1;
@property(nonatomic) _Bool shouldBlockChangingSelected; // @synthesize shouldBlockChangingSelected=_shouldBlockChangingSelected;
@property(nonatomic) _Bool shouldBlockInteraction; // @synthesize shouldBlockInteraction=_shouldBlockInteraction;
@property(nonatomic) __weak SCCameraToolbarItem *toolbarItemToSelect; // @synthesize toolbarItemToSelect=_toolbarItemToSelect;
@property(readonly, nonatomic) SCCameraToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;

@end

