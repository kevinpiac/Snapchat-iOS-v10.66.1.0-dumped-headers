//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SOJUCommerceStorePolicy <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *privacyPolicyLabel;
@property(readonly, copy, nonatomic) NSString *privacyPolicyUrl;
@property(readonly, copy, nonatomic) NSString *returnPolicyUrl;
@property(readonly, copy, nonatomic) NSString *returnPolicyUrlLabel;
@property(readonly, copy, nonatomic) NSString *termsOfServicePolicyLabel;
@property(readonly, copy, nonatomic) NSString *termsOfServicePolicyUrl;
@end

