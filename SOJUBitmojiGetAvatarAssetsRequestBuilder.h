//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUBitmojiGetAvatarAssetsRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_groupId;
    NSString *_deploymentEnvironment;
    NSString *_overrideAvatarUserId;
}

+ (id)withJUBitmojiGetAvatarAssetsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDeploymentEnvironment:(id)arg1;
- (id)setDeploymentEnvironmentEnum:(long long)arg1;
- (id)setGroupId:(id)arg1;
- (id)setOverrideAvatarUserId:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

