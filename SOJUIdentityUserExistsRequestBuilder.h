//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUIdentityUserExistsRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_requestUsername;
    NSNumber *_includePublicStory;
}

+ (id)withJUIdentityUserExistsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setIncludePublicStory:(id)arg1;
- (id)setIncludePublicStoryValue:(_Bool)arg1;
- (id)setReqToken:(id)arg1;
- (id)setRequestUsername:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

