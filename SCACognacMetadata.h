//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCACognacMetadata : NSObject <NamedEvent, NSCopying>
{
    NSNumber *cognacMajorUpdateVersion;
    NSNumber *cognacMinorUpdateVersion;
    NSString *cognacId;
    NSString *cognacSessionId;
    NSString *cognacBuildId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCognacBuildId;
- (id)getCognacId;
- (long long)getCognacMajorUpdateVersion;
- (long long)getCognacMinorUpdateVersion;
- (id)getCognacSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setCognacBuildId:(id)arg1;
- (void)setCognacId:(id)arg1;
- (void)setCognacMajorUpdateVersion:(long long)arg1;
- (void)setCognacMinorUpdateVersion:(long long)arg1;
- (void)setCognacSessionId:(id)arg1;

@end

