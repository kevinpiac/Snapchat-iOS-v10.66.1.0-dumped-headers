//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCHTTPRequestToken-Protocol.h"

@class NSString;
@protocol SCRequestManager;

@interface SCRequestManagerHTTPRequestToken : NSObject <SCHTTPRequestToken>
{
    NSString *_requestKey;
    id <SCRequestManager> _requestManager;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequestKey:(id)arg1 requestManager:(id)arg2;

@end

