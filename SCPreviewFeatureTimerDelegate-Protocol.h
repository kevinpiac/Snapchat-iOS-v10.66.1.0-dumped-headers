//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCFeature, SCTimePickerItem;

@protocol SCPreviewFeatureTimerDelegate <NSObject>
- (void)featureTimerDidBeginLongPress:(SCFeature *)arg1;
- (void)featureTimerWillUpdateOnSnapEditingState:(SCFeature *)arg1 withSelectedItem:(SCTimePickerItem *)arg2;
@end

