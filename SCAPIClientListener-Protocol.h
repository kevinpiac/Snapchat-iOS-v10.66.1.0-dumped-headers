//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSHTTPURLResponse, NSURLRequest;

@protocol SCAPIClientListener <NSObject>
- (void)apiClientDidFinishRequest:(NSURLRequest *)arg1 response:(NSHTTPURLResponse *)arg2 parameters:(NSDictionary *)arg3;
@end

