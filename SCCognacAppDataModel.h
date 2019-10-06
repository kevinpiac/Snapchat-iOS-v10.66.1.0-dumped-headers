//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCCognacAppImageResources, SCCognacAppLeaderboardInfo, SCCognacAppPlayersLimits, SCCognacAppPremiumContentInfo, SCCognacContentUpdateInfo;

@interface SCCognacAppDataModel : NSObject <NSCopying, NSCoding>
{
    NSString *_appId;
    NSString *_buildId;
    NSString *_appName;
    NSString *_appDescription;
    NSString *_contentURL;
    NSString *_resourceBundleURL;
    SCCognacAppImageResources *_imageResources;
    SCCognacAppPlayersLimits *_playersLimits;
    SCCognacAppPremiumContentInfo *_premiumContentInfo;
    NSString *_privacyPolicyURL;
    NSString *_termsOfServiceURL;
    unsigned long long _publisherType;
    SCCognacContentUpdateInfo *_contentUpdateInfo;
    NSString *_buildVersion;
    SCCognacAppLeaderboardInfo *_leaderboardInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appDescription; // @synthesize appDescription=_appDescription;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) SCCognacContentUpdateInfo *contentUpdateInfo; // @synthesize contentUpdateInfo=_contentUpdateInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCCognacAppImageResources *imageResources; // @synthesize imageResources=_imageResources;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 appName:(id)arg3 appDescription:(id)arg4 contentURL:(id)arg5 resourceBundleURL:(id)arg6 imageResources:(id)arg7 playersLimits:(id)arg8 premiumContentInfo:(id)arg9 privacyPolicyURL:(id)arg10 termsOfServiceURL:(id)arg11 publisherType:(unsigned long long)arg12 contentUpdateInfo:(id)arg13 buildVersion:(id)arg14 leaderboardInfo:(id)arg15;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCognacAppLeaderboardInfo *leaderboardInfo; // @synthesize leaderboardInfo=_leaderboardInfo;
@property(readonly, copy, nonatomic) SCCognacAppPlayersLimits *playersLimits; // @synthesize playersLimits=_playersLimits;
@property(readonly, copy, nonatomic) SCCognacAppPremiumContentInfo *premiumContentInfo; // @synthesize premiumContentInfo=_premiumContentInfo;
@property(readonly, copy, nonatomic) NSString *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, nonatomic) unsigned long long publisherType; // @synthesize publisherType=_publisherType;
@property(readonly, copy, nonatomic) NSString *resourceBundleURL; // @synthesize resourceBundleURL=_resourceBundleURL;
@property(readonly, copy, nonatomic) NSString *termsOfServiceURL; // @synthesize termsOfServiceURL=_termsOfServiceURL;

@end

