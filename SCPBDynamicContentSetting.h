//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCPBDynamicContentSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long autoRefreshDelayInMilli; // @dynamic autoRefreshDelayInMilli;
@property(nonatomic) float autoRefreshMessageXLandscape; // @dynamic autoRefreshMessageXLandscape;
@property(nonatomic) float autoRefreshMessageXPortrait; // @dynamic autoRefreshMessageXPortrait;
@property(nonatomic) float autoRefreshMessageYLandscape; // @dynamic autoRefreshMessageYLandscape;
@property(nonatomic) float autoRefreshMessageYPortrait; // @dynamic autoRefreshMessageYPortrait;
@property(copy, nonatomic) NSString *dynamicFilterRefreshHint; // @dynamic dynamicFilterRefreshHint;
@property(copy, nonatomic) NSString *dynamicFilterUpdatingMessage; // @dynamic dynamicFilterUpdatingMessage;

@end

