//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCLensLifecycleListener <NSObject>
- (void)didLoadResourcesForLensWithId:(NSString *)arg1;
- (void)didTurnOffLensWithId:(NSString *)arg1;
- (void)didTurnOnLensWithId:(NSString *)arg1;
- (void)willTurnOffLensWithId:(NSString *)arg1;
- (void)willTurnOnLensWithId:(NSString *)arg1;
@end

