//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCImageProcessCommand, SCStackedImageProcessCommandContainer;

@protocol SCUnifiedCameraObjectCommandMapping <NSObject>
@property(readonly, nonatomic) __weak Class supportedCommandSubclass;
- (SCImageProcessCommand *)unifiedCameraObjectCommandFromStackedContainer:(SCStackedImageProcessCommandContainer *)arg1 isVideo:(_Bool)arg2;
@end
