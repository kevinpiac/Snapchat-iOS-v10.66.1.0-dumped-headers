//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLoginOdlvAuthRequestError : NSObject <NSCopying>
{
    long long _errorCode;
    NSString *_message;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (unsigned long long)hash;
- (id)initWithErrorCode:(long long)arg1 message:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;

@end
