//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCSnapAdsIdentifier;

@protocol SCAdTrackPersistenceRequest <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) unsigned long long adProductType;
@property(readonly, copy, nonatomic) NSString *adType;
@property(readonly, nonatomic) id body;
@property(readonly, copy, nonatomic) NSDictionary *cookies;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSDictionary *overrideHeaders;
@property(readonly, nonatomic) unsigned long long requestType;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *snapAdsId;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy, nonatomic) NSString *userAgent;
@end

