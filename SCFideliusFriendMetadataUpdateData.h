//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, SCSnapchattersDataRequest;

@interface SCFideliusFriendMetadataUpdateData : NSObject <NSCopying>
{
    struct NSDictionary *_diffFideliusFriendMetadataMap;
    SCSnapchattersDataRequest *_snapchattersDataRequest;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *diffFideliusFriendMetadataMap; // @synthesize diffFideliusFriendMetadataMap=_diffFideliusFriendMetadataMap;
- (unsigned long long)hash;
- (id)initWithDiffFideliusFriendMetadataMap:(struct NSDictionary *)arg1 snapchattersDataRequest:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchattersDataRequest *snapchattersDataRequest; // @synthesize snapchattersDataRequest=_snapchattersDataRequest;

@end

