//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FABIcon, NSDictionary, NSString;

@interface FABApplicationIdentiferModel : NSObject
{
    NSDictionary *_architectureUUIDMap;
    NSString *_installID;
    NSString *_bundleIdentifier;
    NSString *_instanceIdentifier;
    CDStruct_e24ffa00 _builtSDK;
    CDStruct_e24ffa00 _minimumSDK;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *architectureUUIDMap; // @synthesize architectureUUIDMap=_architectureUUIDMap;
@property(readonly, nonatomic) CDStruct_e24ffa00 builtSDK; // @synthesize builtSDK=_builtSDK;
@property(readonly, nonatomic) NSString *builtSDKString;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)computeExecutableInfo;
- (_Bool)computeInstanceIdentifier;
@property(readonly, nonatomic) FABIcon *icon;
- (id)initWithInstallID:(id)arg1;
@property(readonly, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(readonly, nonatomic) CDStruct_e24ffa00 minimumSDK; // @synthesize minimumSDK=_minimumSDK;
@property(readonly, nonatomic) NSString *minimumSDKString;

@end

