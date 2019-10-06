//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, NSURL, SCLazy, SCNetworkImage, SCQueuePerformer, SCSendToRankingServerMetadataManager, SCUpdateListenerAnnouncer;

@interface SCMyUnifiedProfileDataSource : NSObject <SCUpdateAnnouncing>
{
    NSString *_userId;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCLazy *_snapchattersDataFetcher;
    SCSendToRankingServerMetadataManager *_sendToRankingServerMetadataManager;
    NSArray *_orderedBestFriends;
    long long _numFriends;
    SCNetworkImage *_storyThumbnailNetworkImage;
    NSURL *_bitmojiMerchCellDeeplinkURL;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_addAdditionalFriendsByConversationScore:(id)arg1 mutualFriends:(id)arg2;
- (void)_dispatchNumFriendsUpdate;
- (void)_dispatchOrderedBestFriendsUpdate;
- (void)_fetchAdditionalMutualFriends:(id)arg1;
- (void)_initializeDataSource;
- (void)_setNumFriends:(long long)arg1;
- (void)_setOrderedBestFriends:(id)arg1;
- (void)_updateNumFriends;
- (void)_updateOrderedBestFriends;
- (void)addUpdateListener:(id)arg1;
@property(retain, nonatomic) NSURL *bitmojiMerchCellDeeplinkURL; // @synthesize bitmojiMerchCellDeeplinkURL=_bitmojiMerchCellDeeplinkURL;
- (id)initWithUserId:(id)arg1 snapchattersDataFetcher:(id)arg2 sendToRankingServerMetadataManager:(id)arg3;
- (long long)numFriends;
- (id)orderedBestFriends;
- (void)removeUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

