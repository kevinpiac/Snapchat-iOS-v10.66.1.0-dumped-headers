//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCNNetworkTypesHttpParams : NSObject
{
    NSArray *_headers;
    long long _method;
}

+ (id)HttpParamsWithHeaders:(id)arg1 method:(long long)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
- (id)initWithHeaders:(id)arg1 method:(long long)arg2;
@property(readonly, nonatomic) long long method; // @synthesize method=_method;

@end

