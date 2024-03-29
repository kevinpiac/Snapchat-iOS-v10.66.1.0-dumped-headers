//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface LSAUriResponse : NSObject
{
    NSURL *_uri;
    long long _responseCode;
    NSString *_responseDescription;
    NSData *_data;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithUri:(id)arg1 code:(long long)arg2 description:(id)arg3 data:(id)arg4;
@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;

@end

