//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCEagleLoggingHelper : NSObject
{
    NSString *_sessionId;
    NSString *_queryId;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)dismissScanResultsWithEventListener:(id)arg1 announcerIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)startSessionWithSessionId:(id)arg1 eventListener:(id)arg2 announcerIdentifier:(id)arg3;
- (void)updateQueryId:(long long)arg1;

@end

