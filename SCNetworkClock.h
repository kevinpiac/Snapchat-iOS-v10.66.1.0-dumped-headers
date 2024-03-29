//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, SCNetworkClockTime, SCTimeProvider;

@interface SCNetworkClock : NSObject
{
    NSDateFormatter *_dateFormatter;
    SCTimeProvider *_timeProvider;
    SCNetworkClockTime *_networkTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
@property(retain) SCNetworkClockTime *networkTime; // @synthesize networkTime=_networkTime;
- (id)networkTimeIfSignificantlyDifferentFromClientWithTolerance:(double)arg1;
- (void)syncClockWithServerResponse:(id)arg1;

@end

