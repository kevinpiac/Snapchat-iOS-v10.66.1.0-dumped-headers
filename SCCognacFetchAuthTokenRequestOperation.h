//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString;
@protocol SCCognacAppInstanceAuthTokenProviding;

@interface SCCognacFetchAuthTokenRequestOperation : SCCognacWVJBRequestOperation
{
    id <SCCognacAppInstanceAuthTokenProviding> _authTokenProvider;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (_Bool)_validateState;
@property(retain, nonatomic) id <SCCognacAppInstanceAuthTokenProviding> authTokenProvider; // @synthesize authTokenProvider=_authTokenProvider;
- (void)run;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

