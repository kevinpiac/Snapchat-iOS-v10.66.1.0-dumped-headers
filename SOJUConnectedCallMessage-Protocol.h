//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUConversationMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@protocol SOJUConnectedCallMessage <NSObject, NSCoding, NSCopying, SOJUConversationMessage>
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSString *callType;
@property(readonly, copy, nonatomic) NSNumber *connectedTimestamp;
@property(readonly, copy, nonatomic) SOJUHeader *header;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion;
@property(readonly, copy, nonatomic) NSNumber *retried;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *type;
@end

