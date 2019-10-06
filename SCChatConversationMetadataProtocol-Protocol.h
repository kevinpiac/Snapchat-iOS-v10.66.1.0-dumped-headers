//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol SCChatConversationMetadataProtocol <NSObject>
- (struct NSDictionary *)earliestKnownChatSequenceNums;
- (NSString *)id;
- (_Bool)isGroupConversation;
- (struct NSDictionary *)knownChatSequenceNums;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (struct NSDictionary *)knownStateUpdateSequenceNums;
- (NSSet *)unknownMessageTypes;
@end

