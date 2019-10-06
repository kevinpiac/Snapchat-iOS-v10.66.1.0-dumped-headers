//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SCArchivedMetadataStore : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_conversationMetadata;
    NSDictionary *_addressMediaCards;
    NSDictionary *_urlMediaCards;
    NSDictionary *_chatDrafts;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *addressMediaCards; // @synthesize addressMediaCards=_addressMediaCards;
@property(readonly, copy, nonatomic) NSDictionary *chatDrafts; // @synthesize chatDrafts=_chatDrafts;
@property(readonly, copy, nonatomic) NSDictionary *conversationMetadata; // @synthesize conversationMetadata=_conversationMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationMetadata:(id)arg1 addressMediaCards:(id)arg2 urlMediaCards:(id)arg3 chatDrafts:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *urlMediaCards; // @synthesize urlMediaCards=_urlMediaCards;

@end
