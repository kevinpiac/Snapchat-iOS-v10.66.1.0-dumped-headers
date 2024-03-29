//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChatMetadataFetchActionData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_mediaCard_messageId;
    NSString *_mediaCard_conversationId;
    NSString *_storySnap_storySnapId;
    NSString *_storySnap_messageId;
    NSString *_storySnap_conversationId;
}

+ (id)mediaCardWithMessageId:(id)arg1 conversationId:(id)arg2;
+ (id)storySnapWithStorySnapId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchMediaCard:(CDUnknownBlockType)arg1 storySnap:(CDUnknownBlockType)arg2;

@end

