//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAbuseWarningAcknowledgement-Protocol.h"

@class NSString, SCLazy;

@interface SCRemoteAbuseWarningAcknowledgement : NSObject <SCAbuseWarningAcknowledgement>
{
    NSString *_abuseWarningId;
    SCLazy *_requestManager;
}

- (void).cxx_destruct;
- (void)acknowledgeAbuseWarning;
- (id)initWithAbuseWarningId:(id)arg1 requestManager:(id)arg2;

@end

