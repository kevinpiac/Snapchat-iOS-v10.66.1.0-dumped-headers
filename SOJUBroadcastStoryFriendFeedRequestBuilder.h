//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastStoryFriendFeedRequestBuilder : NSObject
{
    NSString *_checksum;
    NSString *_syncMetadata;
    NSString *_requestType;
    NSArray *_mobStoryTypesToRank;
    NSNumber *_shouldReturnStoryScores;
    NSNumber *_mischiefIdInOrderResp;
    NSString *_checksumMissingReason;
    NSString *_requestSource;
    NSNumber *_friendStoryShouldNotReturnViewStatus;
    NSNumber *_myStoryShouldNotReturnViewerInfo;
}

+ (id)withJUBroadcastStoryFriendFeedRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setChecksum:(id)arg1;
- (id)setChecksumMissingReason:(id)arg1;
- (id)setChecksumMissingReasonEnum:(long long)arg1;
- (id)setFriendStoryShouldNotReturnViewStatus:(id)arg1;
- (id)setFriendStoryShouldNotReturnViewStatusValue:(_Bool)arg1;
- (id)setMischiefIdInOrderResp:(id)arg1;
- (id)setMischiefIdInOrderRespValue:(_Bool)arg1;
- (id)setMobStoryTypesToRank:(id)arg1;
- (id)setMyStoryShouldNotReturnViewerInfo:(id)arg1;
- (id)setMyStoryShouldNotReturnViewerInfoValue:(_Bool)arg1;
- (id)setRequestSource:(id)arg1;
- (id)setRequestSourceEnum:(long long)arg1;
- (id)setRequestType:(id)arg1;
- (id)setRequestTypeEnum:(long long)arg1;
- (id)setShouldReturnStoryScores:(id)arg1;
- (id)setShouldReturnStoryScoresValue:(_Bool)arg1;
- (id)setSyncMetadata:(id)arg1;

@end

