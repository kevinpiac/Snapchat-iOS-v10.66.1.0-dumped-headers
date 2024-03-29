//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedGroupConversationVersion, SCFriendsFeedOneOnOneConversationVersion;

@interface SCFriendsFeedConversationVersion : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedOneOnOneConversationVersion *_oneOnOneConversationVersion_oneOnOneConversationVersion;
    SCFriendsFeedGroupConversationVersion *_groupConversationVersion_groupConversationVersion;
}

+ (id)groupConversationVersionWithGroupConversationVersion:(id)arg1;
+ (id)oneOnOneConversationVersionWithOneOnOneConversationVersion:(id)arg1;
- (void).cxx_destruct;
- (id)asGroupConversationVersion;
- (id)asOneOnOneConversationVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchOneOnOneConversationVersion:(CDUnknownBlockType)arg1 groupConversationVersion:(CDUnknownBlockType)arg2;
- (unsigned long long)subtype;
- (id)xLogObjectInfo;

@end

