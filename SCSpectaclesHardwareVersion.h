//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesHardwareVersion-Protocol.h"

@class NSString;

@interface SCSpectaclesHardwareVersion : NSObject <SCSpectaclesHardwareVersion>
{
    long long _majorVersion;
    long long _minorVersion;
}

+ (id)_sharedVersionMatchingRegex;
+ (id)lagunaVersion;
+ (id)malibuVersion;
+ (id)manhattanVersion;
+ (id)neptuneVersion;
+ (id)newportVersion;
- (_Bool)_parseVersionString:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(long long)arg1 minorVersion:(long long)arg2;
- (id)initWithString:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isLaguna;
- (_Bool)isMalibu;
- (_Bool)isNeptune;
- (_Bool)isNewport;
@property(nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

