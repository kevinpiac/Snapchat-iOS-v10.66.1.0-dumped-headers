//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSError, NSHTTPURLResponse, SCRequest;

@protocol SCNetworkInterceptor <NSObject, NSCopying>
- (void)interceptWithRequest:(SCRequest *)arg1 response:(NSHTTPURLResponse *)arg2 data:(id)arg3 error:(NSError *)arg4;
@end
