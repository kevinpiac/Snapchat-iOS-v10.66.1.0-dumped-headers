//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASnapKitSnapchatEvent.h"

@class NSNumber;

@interface SCASnapKitUserAuthorize : SCASnapKitSnapchatEvent
{
    NSNumber *isAuthorized;
    NSNumber *enableBitmojiAccess;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getEnableBitmojiAccess;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsAuthorized;
- (double)getPerUserSamplingRate;
- (void)setEnableBitmojiAccess:(_Bool)arg1;
- (void)setIsAuthorized:(_Bool)arg1;

@end

