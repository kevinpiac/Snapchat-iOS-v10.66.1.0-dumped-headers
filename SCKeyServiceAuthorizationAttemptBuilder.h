//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCKeyServiceAuthorizationAttemptBuilder : NSObject
{
    NSString *_userId;
    long long _numberOfAttempts;
    NSDate *_allowedFutureDate;
}

+ (id)withKeyServiceAuthorizationAttempt:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAllowedFutureDate:(id)arg1;
- (id)setNumberOfAttempts:(long long)arg1;
- (id)setUserId:(id)arg1;

@end

