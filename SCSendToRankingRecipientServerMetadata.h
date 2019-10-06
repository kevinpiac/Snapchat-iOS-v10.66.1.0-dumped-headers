//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface SCSendToRankingRecipientServerMetadata : NSObject <NSCopying, NSCoding>
{
    NSString *_recipientId;
    NSString *_recipientType;
    NSDictionary *_serverSideSignals;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientId:(id)arg1 recipientType:(id)arg2 serverSideSignals:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recipientId; // @synthesize recipientId=_recipientId;
@property(readonly, copy, nonatomic) NSString *recipientType; // @synthesize recipientType=_recipientType;
@property(readonly, copy, nonatomic) NSDictionary *serverSideSignals; // @synthesize serverSideSignals=_serverSideSignals;

@end
