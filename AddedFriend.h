//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNamedFriend-Protocol.h"

@class NSNumber, NSString;

@interface AddedFriend : NSObject <SCNamedFriend>
{
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _isFriendRequestViewed;
    _Bool _removed;
    _Bool _hasBeenSeen;
    _Bool _blocking;
    _Bool _reporting;
    NSString *_display;
    NSString *_snapcodeUrl;
    NSString *_name;
    NSString *_userId;
    unsigned long long _pendingSnapCount;
    unsigned long long _pendingChatCount;
    unsigned long long _potentialHighQualityScore;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSNumber *_timestamp;
    long long _type;
    NSString *_addSource;
    long long _addSourceType;
}

- (void).cxx_destruct;
@property(retain) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain) NSString *display; // @synthesize display=_display;
- (void)encodeWithCoder:(id)arg1;
@property(retain, getter=getAddSource) NSString *addSource; // @synthesize addSource=_addSource;
@property(getter=getAddSourceType) long long addSourceType; // @synthesize addSourceType=_addSourceType;
@property _Bool hasBeenSeen; // @synthesize hasBeenSeen=_hasBeenSeen;
- (_Bool)hasDisplay;
@property _Bool hidden; // @synthesize hidden=_hidden;
- (id)identifier;
@property _Bool ignored; // @synthesize ignored=_ignored;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriend:(id)arg1;
- (id)initWithSoju:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;
@property(getter=isBlocking) _Bool blocking; // @synthesize blocking=_blocking;
- (_Bool)isDeletedOrBlocked;
@property _Bool isFriendRequestViewed; // @synthesize isFriendRequestViewed=_isFriendRequestViewed;
@property(getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(getter=isReporting) _Bool reporting; // @synthesize reporting=_reporting;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)nameToDisplay;
@property _Bool newLink; // @synthesize newLink=_newLink;
@property unsigned long long pendingChatCount; // @synthesize pendingChatCount=_pendingChatCount;
@property unsigned long long pendingSnapCount; // @synthesize pendingSnapCount=_pendingSnapCount;
@property unsigned long long potentialHighQualityScore; // @synthesize potentialHighQualityScore=_potentialHighQualityScore;
@property(retain) NSString *snapcodeUrl; // @synthesize snapcodeUrl=_snapcodeUrl;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property long long type; // @synthesize type=_type;
@property(retain) NSString *userId; // @synthesize userId=_userId;
- (void)updateWithAddedFriend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

