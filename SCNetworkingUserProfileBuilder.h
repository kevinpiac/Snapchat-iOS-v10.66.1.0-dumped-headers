//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCNetworkingUserProfileBuilder : NSObject
{
    double _ttl;
    double _bornTime;
    NSDictionary *_userProfileResponseDict;
}

+ (id)withNetworkingUserProfile:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBornTime:(double)arg1;
- (id)setTtl:(double)arg1;
- (id)setUserProfileResponseDict:(id)arg1;

@end

