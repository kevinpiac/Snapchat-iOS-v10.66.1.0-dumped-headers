//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceContactDetailsDataModel : NSObject <NSCopying>
{
    NSString *_email;
    NSString *_phone;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (unsigned long long)hash;
- (id)initWithEmail:(id)arg1 phone:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;

@end

