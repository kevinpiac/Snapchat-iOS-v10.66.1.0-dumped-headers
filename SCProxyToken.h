//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface SCProxyToken : NSObject <NSCoding>
{
    NSString *_token;
    NSDate *_expiry;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 expiry:(id)arg2;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;

@end

