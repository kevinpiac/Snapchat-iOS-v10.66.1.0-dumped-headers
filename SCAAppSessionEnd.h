//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCAAppSessionEnd : SCAUserTrackedEvent
{
    NSNumber *sessionTimeSec;
    NSNumber *sessionActiveTimeSec;
    NSNumber *withGallery;
    NSNumber *withGalleryInvite;
    NSNumber *withPrivateGallery;
    long long deepLinkSource;
    long long applicationState;
    NSString *deepLinkId;
    NSDate *sessionStartTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getApplicationState;
- (id)getDeepLinkId;
- (long long)getDeepLinkSource;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSessionActiveTimeSec;
- (id)getSessionStartTs;
- (long long)getSessionTimeSec;
- (_Bool)getWithGallery;
- (_Bool)getWithGalleryInvite;
- (_Bool)getWithPrivateGallery;
- (id)init;
- (void)setApplicationState:(long long)arg1;
- (void)setDeepLinkId:(id)arg1;
- (void)setDeepLinkSource:(long long)arg1;
- (void)setSessionActiveTimeSec:(long long)arg1;
- (void)setSessionStartTs:(id)arg1;
- (void)setSessionTimeSec:(long long)arg1;
- (void)setWithGallery:(_Bool)arg1;
- (void)setWithGalleryInvite:(_Bool)arg1;
- (void)setWithPrivateGallery:(_Bool)arg1;

@end
