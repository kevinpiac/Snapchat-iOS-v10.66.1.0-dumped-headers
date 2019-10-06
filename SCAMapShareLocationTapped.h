//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMapShareLocationTapped : SCAUserTrackedEvent
{
    NSNumber *isSuccess;
    NSNumber *isMischief;
    long long source;
    NSString *shareDialogType;
    NSString *resultSharingAudience;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsMischief;
- (_Bool)getIsSuccess;
- (double)getPerUserSamplingRate;
- (id)getResultSharingAudience;
- (id)getShareDialogType;
- (long long)getSource;
- (id)init;
- (void)setIsMischief:(_Bool)arg1;
- (void)setIsSuccess:(_Bool)arg1;
- (void)setResultSharingAudience:(id)arg1;
- (void)setShareDialogType:(id)arg1;
- (void)setSource:(long long)arg1;

@end

