//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPreviewToolBarButtonItem;

@protocol SCPreviewToolBarButtonItemDelegate <NSObject>
- (void)itemAccessoryViewsHaveChanged:(SCPreviewToolBarButtonItem *)arg1 addAccessoryViews:(_Bool)arg2 needAnimation:(_Bool)arg3;

@optional
- (double)itemAccessoryViewsAnimationDuration;
@end

