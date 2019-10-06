//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCLensSecurityHelper : NSObject <SCTraceEnabled>
{
}

+ (_Bool)checkResourceTypeMatches:(long long)arg1 resource:(id)arg2 failureHandler:(CDUnknownBlockType)arg3;
+ (id)directoryHashStringForContentAtPath:(id)arg1;
+ (id)hashStringForContentAtPath:(id)arg1;
+ (id)sha256HashForData:(const void *)arg1 length:(long long)arg2;
+ (_Bool)verifyHash:(id)arg1 forContentPath:(id)arg2 error:(id *)arg3;
+ (_Bool)verifyHash:(id)arg1 forData:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

