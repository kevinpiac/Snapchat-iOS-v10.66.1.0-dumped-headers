//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSURLSessionTask, NSError, NSHTTPURLResponse, NSURLRequest;

@protocol CLSURLSessionTaskDelegate <NSObject>
- (void)task:(CLSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (NSURLRequest *)task:(CLSURLSessionTask *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3;
@end

