//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCCognacAppInstanceDataModel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *appId;
@property(readonly, copy, nonatomic) NSString *conversationId;
@property(readonly, nonatomic) double expirationDuration;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *instanceId;
@property(readonly, nonatomic) _Bool terminated;
@property(readonly, nonatomic) long long version;
@end

