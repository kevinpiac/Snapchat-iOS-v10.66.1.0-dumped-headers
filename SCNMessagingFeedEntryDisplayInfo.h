//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCNMessagingFeedItem, SCNMessagingUUID;

@interface SCNMessagingFeedEntryDisplayInfo : NSObject
{
    _Bool _viewed;
    long long _displayTimestamp;
    NSArray *_lastUpdateActorUserIds;
    SCNMessagingUUID *_feedItemCreatorId;
    SCNMessagingFeedItem *_feedItem;
}

+ (id)FeedEntryDisplayInfoWithDisplayTimestamp:(long long)arg1 lastUpdateActorUserIds:(id)arg2 feedItemCreatorId:(id)arg3 feedItem:(id)arg4 viewed:(_Bool)arg5;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
@property(readonly, nonatomic) SCNMessagingFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) SCNMessagingUUID *feedItemCreatorId; // @synthesize feedItemCreatorId=_feedItemCreatorId;
- (id)initWithDisplayTimestamp:(long long)arg1 lastUpdateActorUserIds:(id)arg2 feedItemCreatorId:(id)arg3 feedItem:(id)arg4 viewed:(_Bool)arg5;
@property(readonly, nonatomic) NSArray *lastUpdateActorUserIds; // @synthesize lastUpdateActorUserIds=_lastUpdateActorUserIds;
@property(readonly, nonatomic) _Bool viewed; // @synthesize viewed=_viewed;

@end

