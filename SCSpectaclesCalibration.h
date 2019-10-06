//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSNumber, NSString;

@interface SCSpectaclesCalibration : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
    NSString *_serialNumber;
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
}

+ (id)calibrationWithNewportData:(id)arg1 serialNumber:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 majorVersion:(id)arg2 minorVersion:(id)arg3 serialNumber:(id)arg4;
@property(readonly, copy, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
@property(readonly, copy, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

@end
