//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCContextV2BidirecionalStoryViewPriorityRulesExperimentContext : SCExperimentContext
{
    _Bool _isEnabled;
    NSString *_treatment;
    long long _lowFriendCountThreshold;
}

+ (id)experimentName;
- (void).cxx_destruct;
- (id)experimentName;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) long long lowFriendCountThreshold; // @synthesize lowFriendCountThreshold=_lowFriendCountThreshold;
@property(retain, nonatomic) NSString *treatment; // @synthesize treatment=_treatment;
- (void)setupParameters;

@end
