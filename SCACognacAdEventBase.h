//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacEventBase.h"

@class SCACognacAdMetadata, SCACognacMetadata;

@interface SCACognacAdEventBase : SCACognacEventBase
{
    SCACognacMetadata *cognacMetadata;
    SCACognacAdMetadata *cognacAdMetadata;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCognacAdMetadata;
- (id)getCognacMetadata;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (void)setCognacAdMetadata:(id)arg1;
- (void)setCognacMetadata:(id)arg1;

@end

