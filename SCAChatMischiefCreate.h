//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAChatMischiefCreate : SCAUserTrackedEvent
{
    NSNumber *recipientCount;
    long long chatSource;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getChatSource;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (long long)getRecipientCount;
- (id)init;
- (void)setChatSource:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setRecipientCount:(long long)arg1;

@end

