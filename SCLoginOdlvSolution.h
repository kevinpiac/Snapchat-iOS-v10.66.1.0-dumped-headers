//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLoginOdlvSolution : NSObject <NSCopying>
{
    unsigned long long _otpType;
    NSString *_confirmationCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *confirmationCode; // @synthesize confirmationCode=_confirmationCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithOtpType:(unsigned long long)arg1 confirmationCode:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long otpType; // @synthesize otpType=_otpType;

@end

