//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAddFriendsBadgingExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _onAvatar;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)experimentName;
@property(readonly, nonatomic) _Bool onAvatar; // @synthesize onAvatar=_onAvatar;
- (void)setupParameters;

@end

