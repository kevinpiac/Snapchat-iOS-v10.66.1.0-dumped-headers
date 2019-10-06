//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNNetworkManagerTrackingInfo : NSObject
{
    NSString *_id;
    NSString *_type;
    NSString *_mediaType;
    long long _expirationInDays;
}

+ (id)TrackingInfoWithId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(long long)arg4;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long expirationInDays; // @synthesize expirationInDays=_expirationInDays;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(long long)arg4;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

@end
