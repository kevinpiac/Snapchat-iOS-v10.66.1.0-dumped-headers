//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SOJUUploadUrlRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSArray *_urlType;
}

+ (id)withJUUploadUrlRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUrlType:(id)arg1;
- (id)setUsername:(id)arg1;

@end
