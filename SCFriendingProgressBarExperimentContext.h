//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCFriendingProgressBarExperimentContext : SCExperimentContext
{
    _Bool _enabledInRegistration;
    _Bool _enabledAfterRegistration;
}

@property(readonly, nonatomic) _Bool enabledAfterRegistration; // @synthesize enabledAfterRegistration=_enabledAfterRegistration;
@property(readonly, nonatomic) _Bool enabledInRegistration; // @synthesize enabledInRegistration=_enabledInRegistration;
- (id)experimentName;
- (void)setupParameters;

@end

