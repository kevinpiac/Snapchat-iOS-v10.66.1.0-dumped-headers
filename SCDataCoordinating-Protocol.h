//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol NSCopying, SCDataCoordinatorListener;

@protocol SCDataCoordinating <NSObject>
+ (NSString *)dataCoordinatorIdentifier;
- (void)addDataUpdateListener:(id <SCDataCoordinatorListener>)arg1;
- (void)handleDataRequest:(NSObject<NSCopying> *)arg1;
- (void)removeDataUpdateListener:(id <SCDataCoordinatorListener>)arg1;
@end

