//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJULastMischiefContent <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *firstMediaType;
@property(readonly, copy, nonatomic) NSString *messageBodyType;
@property(readonly, copy, nonatomic) NSNumber *senderMessageSeqNum;
@property(readonly, copy, nonatomic) NSString *senderUsername;
@property(readonly, copy, nonatomic) NSNumber *sentTimestamp;
@property(readonly, copy, nonatomic) NSNumber *viewedTimestamp;
@end

