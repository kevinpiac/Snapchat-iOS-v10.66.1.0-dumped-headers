//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLoginTwoFAChallenge : NSObject <NSCopying>
{
    NSString *_username;
    NSString *_phoneNumber;
    NSString *_preAuthToken;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUsername:(id)arg1 phoneNumber:(id)arg2 preAuthToken:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *preAuthToken; // @synthesize preAuthToken=_preAuthToken;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
