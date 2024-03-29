//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSString;

@interface SCACognacAdMetadata : NSObject <NamedEvent, NSCopying>
{
    long long status;
    NSString *slotId;
    NSString *externalRequestId;
    NSString *failReasons;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getExternalRequestId;
- (id)getFailReasons;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getSlotId;
- (long long)getStatus;
- (id)init;
- (void)setExternalRequestId:(id)arg1;
- (void)setFailReasons:(id)arg1;
- (void)setSlotId:(id)arg1;
- (void)setStatus:(long long)arg1;

@end

