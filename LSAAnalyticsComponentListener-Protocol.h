//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSAAnalyticsComponent, NSArray, NSDictionary, NSString;

@protocol LSAAnalyticsComponentListener <NSObject>
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didChangeContent:(NSString *)arg2 effectId:(NSString *)arg3;
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didPrepareEventAnalyticsReport:(NSArray *)arg2 effectId:(NSString *)arg3;
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didPreparePerformanceAnalyticsReport:(NSDictionary *)arg2;
@end

