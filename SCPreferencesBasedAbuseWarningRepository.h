//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAbuseWarningRepository-Protocol.h"

@class NSString, SCPreferences;

@interface SCPreferencesBasedAbuseWarningRepository : NSObject <SCAbuseWarningRepository>
{
    SCPreferences *_preferences;
    NSString *_abuseWarningMessageId;
    NSString *_abuseWarningMessage;
}

- (void).cxx_destruct;
- (void)_saveToPerferences;
@property(readonly, nonatomic) NSString *abuseWarningMessage; // @synthesize abuseWarningMessage=_abuseWarningMessage;
@property(readonly, nonatomic) NSString *abuseWarningMessageId; // @synthesize abuseWarningMessageId=_abuseWarningMessageId;
- (void)clearAbuseWarning;
- (id)initWithUserPreferences:(id)arg1;
- (void)setAbuseWarningWithId:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

