//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCSpectaclesHardwareVersion;

@protocol SCSpectaclesHardwareVersion <NSObject, NSCoding>
- (long long)compare:(id <SCSpectaclesHardwareVersion>)arg1;
- (_Bool)isEqualToVersion:(id <SCSpectaclesHardwareVersion>)arg1;
- (_Bool)isLaguna;
- (_Bool)isMalibu;
- (_Bool)isNeptune;
- (_Bool)isNewport;
@property(readonly, nonatomic) long long majorVersion;
@property(readonly, nonatomic) long long minorVersion;
@end

