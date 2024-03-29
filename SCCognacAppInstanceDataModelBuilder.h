//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCCognacAppInstanceDataModelBuilder : NSObject
{
    NSString *_instanceId;
    NSString *_appId;
    NSString *_conversationId;
    NSDate *_expirationTimestamp;
    double _expirationDuration;
    _Bool _terminated;
    long long _version;
}

+ (id)withCognacAppInstanceDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAppId:(id)arg1;
- (id)setConversationId:(id)arg1;
- (id)setExpirationDuration:(double)arg1;
- (id)setExpirationTimestamp:(id)arg1;
- (id)setInstanceId:(id)arg1;
- (id)setTerminated:(_Bool)arg1;
- (id)setVersion:(long long)arg1;

@end

