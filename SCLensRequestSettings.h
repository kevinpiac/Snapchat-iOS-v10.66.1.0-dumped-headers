//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensRequestSettings : NSObject
{
    long long _priority;
    long long _fallbackPriority;
    long long _fetchPolicy;
    NSString *_trackingId;
    NSString *_trackingType;
    NSString *_trackingMediaType;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long fallbackPriority; // @synthesize fallbackPriority=_fallbackPriority;
@property(readonly, nonatomic) long long fetchPolicy; // @synthesize fetchPolicy=_fetchPolicy;
- (id)initWithPriority:(long long)arg1 fallbackPriority:(long long)arg2 fetchPolicy:(long long)arg3 trackingId:(id)arg4 trackingType:(id)arg5 trackingMediaType:(id)arg6;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (id)stringFromFetchPolicy:(long long)arg1;
- (id)stringFromPriority:(long long)arg1;
@property(readonly, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, nonatomic) NSString *trackingMediaType; // @synthesize trackingMediaType=_trackingMediaType;
@property(readonly, nonatomic) NSString *trackingType; // @synthesize trackingType=_trackingType;

@end
