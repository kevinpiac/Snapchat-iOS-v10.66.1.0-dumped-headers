//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUFriendSearchRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_query;
    NSNumber *_test;
}

+ (id)withJUFriendSearchRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setQuery:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTest:(id)arg1;
- (id)setTestValue:(_Bool)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end
