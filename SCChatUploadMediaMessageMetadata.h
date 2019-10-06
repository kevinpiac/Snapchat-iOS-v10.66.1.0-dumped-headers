//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCChatUploadMediaMessageMetadata : NSObject <NSCopying>
{
    NSArray *_uploadMediaIds;
    long long _sendStatus;
    NSString *_clientResolutionId;
    NSString *_conversationId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientResolutionId; // @synthesize clientResolutionId=_clientResolutionId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUploadMediaIds:(id)arg1 sendStatus:(long long)arg2 clientResolutionId:(id)arg3 conversationId:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(readonly, copy, nonatomic) NSArray *uploadMediaIds; // @synthesize uploadMediaIds=_uploadMediaIds;

@end
