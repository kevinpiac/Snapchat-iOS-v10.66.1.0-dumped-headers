//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacEventBase.h"

@class SCACognacMetadata;

@interface SCACognacActionStartWithFriendsPrompt : SCACognacEventBase
{
    SCACognacMetadata *cognacMetadata;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCognacMetadata;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (void)setCognacMetadata:(id)arg1;

@end

