//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUBroadcastMobsApiLeaveMobStoryRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_idValue;
    NSNumber *_isBlock;
}

+ (id)withJUBroadcastMobsApiLeaveMobStoryRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setIdValue:(id)arg1;
- (id)setIsBlock:(id)arg1;
- (id)setIsBlockValue:(_Bool)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end
