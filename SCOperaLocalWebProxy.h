//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCOperaLocalWebProxy : NSObject
{
    NSMutableDictionary *_proxyDictionary;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)setBaseURL:(id)arg1 forProxyBaseURL:(id)arg2;
- (id)urlForProxy:(id)arg1;

@end

