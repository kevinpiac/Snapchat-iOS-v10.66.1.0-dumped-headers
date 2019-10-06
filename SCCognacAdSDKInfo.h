//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCognacAdSDKInfo : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_buildId;
    NSArray *_slotIds;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 slotIds:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *slotIds; // @synthesize slotIds=_slotIds;

@end

