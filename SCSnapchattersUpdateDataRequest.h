//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, SCSnapchatter;

@interface SCSnapchattersUpdateDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatter *_add_snapchatter;
    long long _add_addSource;
    long long _add_placement;
    long long _add_cellIndex;
    NSArray *_multiAdd_addFriendDataRequests;
    long long _multiAdd_placement;
    _Bool _multiAdd_isRegistration;
    SCSnapchatter *_delete_aFriend;
    long long _delete_deleteSource;
    SCSnapchatter *_ignore_incomingFriend;
    SCSnapchatter *_block_snapchatter;
    NSNumber *_block_blockReasonId;
    SCSnapchatter *_unblock_blockedSnapchatter;
    SCSnapchatter *_muteStory_aFriend;
    SCSnapchatter *_unMuteStory_aFriend;
    SCSnapchatter *_setDisplay_snapchatter;
    NSString *_setDisplay_displayName;
    long long _setStoryPrivacy_storyPrivacy;
    NSArray *_setStoryPrivacy_userIds;
}

+ (long long)addSourceTypeForAddSource:(id)arg1;
+ (id)addWithSnapchatter:(id)arg1 addSource:(long long)arg2 placement:(long long)arg3 cellIndex:(long long)arg4;
+ (id)blockWithSnapchatter:(id)arg1 blockReasonId:(id)arg2;
+ (id)deleteWithAFriend:(id)arg1 deleteSource:(long long)arg2;
+ (id)ignoreWithIncomingFriend:(id)arg1;
+ (id)initWithSCCAddFriendRequest:(id)arg1;
+ (id)multiAddWithAddFriendDataRequests:(id)arg1 placement:(long long)arg2 isRegistration:(_Bool)arg3;
+ (id)muteStoryWithAFriend:(id)arg1;
+ (long long)placementTypeForPlacementType:(id)arg1;
+ (id)setDisplayWithSnapchatter:(id)arg1 displayName:(id)arg2;
+ (id)setStoryPrivacyWithStoryPrivacy:(long long)arg1 userIds:(id)arg2;
+ (id)unMuteStoryWithAFriend:(id)arg1;
+ (id)unblockWithBlockedSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)asAdd;
- (id)asBlock;
- (id)asDelete;
- (id)asIgnore;
- (id)asMultiAdd;
- (id)asMuteStory;
- (id)asSetDisplay;
- (id)asSetStoryPrivacy;
- (id)asUnMuteStory;
- (id)asUnblock;
- (id)asUserId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchAdd:(CDUnknownBlockType)arg1 multiAdd:(CDUnknownBlockType)arg2 delete:(CDUnknownBlockType)arg3 ignore:(CDUnknownBlockType)arg4 block:(CDUnknownBlockType)arg5 unblock:(CDUnknownBlockType)arg6 muteStory:(CDUnknownBlockType)arg7 unMuteStory:(CDUnknownBlockType)arg8 setDisplay:(CDUnknownBlockType)arg9 setStoryPrivacy:(CDUnknownBlockType)arg10;
- (void)matchAddDeleteBlockUnblockWithCompletion:(CDUnknownBlockType)arg1;
- (void)matchAddDeleteBlockWithCompletion:(CDUnknownBlockType)arg1;

@end

