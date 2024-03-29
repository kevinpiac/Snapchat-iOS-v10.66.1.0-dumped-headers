//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCACameraScanAction : SCAUserTrackedEvent
{
    long long scanActionType;
    long long source;
    long long scanType;
    long long action;
    NSString *scanData;
    NSString *scannableId;
    NSString *notificationId;
    NSString *filterLensId;
    NSString *teamsnapId;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getNotificationId;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getScanActionType;
- (id)getScanData;
- (long long)getScanType;
- (id)getScannableId;
- (long long)getSource;
- (id)getTeamsnapId;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setScanActionType:(long long)arg1;
- (void)setScanData:(id)arg1;
- (void)setScanType:(long long)arg1;
- (void)setScannableId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setTeamsnapId:(id)arg1;

@end

