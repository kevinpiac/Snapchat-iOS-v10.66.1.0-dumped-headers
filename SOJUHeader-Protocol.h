//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUSignedPayload;

@protocol SOJUHeader <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUSignedPayload *auth;
@property(readonly, copy, nonatomic) NSNumber *connSeqNum;
@property(readonly, copy, nonatomic) NSString *convId;
@property(readonly, copy, nonatomic) NSString *from;
@property(readonly, copy, nonatomic) NSNumber *isv3;
@property(readonly, copy, nonatomic) NSArray *to;
@end

