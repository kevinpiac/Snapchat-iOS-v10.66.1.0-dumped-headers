//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAChatHamburgerView : SCAUserTrackedEvent
{
    NSString *mischiefId;
    NSString *correspondentId;
    NSString *ghost_correspondent_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCorrespondentId;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGhost_correspondent_id;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (void)setCorrespondentId:(id)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setMischiefId:(id)arg1;

@end

