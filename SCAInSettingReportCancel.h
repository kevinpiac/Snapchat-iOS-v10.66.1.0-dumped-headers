//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAInSettingReportCancel : SCAUserTrackedEvent
{
    NSNumber *withTopicRequired;
    NSString *ticketId;
    NSString *pageName;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getPageName;
- (double)getPerUserSamplingRate;
- (id)getTicketId;
- (_Bool)getWithTopicRequired;
- (void)setPageName:(id)arg1;
- (void)setTicketId:(id)arg1;
- (void)setWithTopicRequired:(_Bool)arg1;

@end

