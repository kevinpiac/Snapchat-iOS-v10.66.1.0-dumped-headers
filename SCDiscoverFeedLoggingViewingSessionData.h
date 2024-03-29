//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedLoggingViewingSessionData : NSObject <NSCopying>
{
    _Bool _isSubitemViewingSession;
    NSDate *_currentStoryStartViewTimestamp;
    NSMutableSet *_uniqueViewedSubitemIds;
    NSDate *_currentlyPlayingMediaStartTime;
    NSMutableSet *_skippedSubitemIds;
    NSMutableDictionary *_subitemIdToIndex;
    _Bool _enableTotalNumSnapsFromStoryLoggingInfo;
    _Bool _isFullyViewed;
    NSString *_identifier;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    unsigned long long _rerankingId;
    long long _itemPos;
    long long _itemSource;
    long long _entryEvent;
    NSDate *_viewSessionStartTime;
    double _mediaViewTime;
    NSString *_subitemId;
    NSString *_pageId;
    unsigned long long _numberOfSnapsViewed;
    long long _maxSubitemViewIndex;
    NSString *_maxSubitemIdView;
    NSDictionary *_fieldsOverrideDict;
    NSString *_section;
    NSString *_triggeringItemId;
    long long _triggeringItemPlaylistOffset;
}

- (void).cxx_destruct;
- (void)_updateSubitemArrayWithStoryLoggingInfo:(id)arg1;
- (unsigned long long)adjustedSnapIndexForSubitemId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) NSDictionary *fieldsOverrideDict; // @synthesize fieldsOverrideDict=_fieldsOverrideDict;
- (double)getTotalMediaDurationSecs;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 storyLoggingInfo:(id)arg2 rerankingId:(unsigned long long)arg3 itemPos:(long long)arg4 itemSource:(long long)arg5 subitemId:(id)arg6 pageId:(id)arg7 entryEvent:(long long)arg8 viewSessionStartTime:(id)arg9 triggeringItemId:(id)arg10 triggeringItemPlaylistOffset:(long long)arg11 section:(id)arg12 isFullyViewed:(_Bool)arg13 fieldsOverrideDict:(id)arg14 enableTotalNumSnapsProperty:(_Bool)arg15;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, nonatomic) long long itemSource; // @synthesize itemSource=_itemSource;
- (long long)itemType;
@property(readonly, nonatomic) NSString *maxSubitemIdView; // @synthesize maxSubitemIdView=_maxSubitemIdView;
@property(readonly, nonatomic) long long maxSubitemViewIndex; // @synthesize maxSubitemViewIndex=_maxSubitemViewIndex;
- (void)mediaStartedPlayingAtTime:(id)arg1;
@property(readonly, nonatomic) double mediaViewTime; // @synthesize mediaViewTime=_mediaViewTime;
- (unsigned long long)numberOfSnapsAvailable;
@property(readonly, nonatomic) unsigned long long numberOfSnapsViewed; // @synthesize numberOfSnapsViewed=_numberOfSnapsViewed;
- (unsigned long long)numberOfUniqueSubitemsViewed;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) unsigned long long rerankingId; // @synthesize rerankingId=_rerankingId;
- (void)resetAfterLoadingFromSavedCopyWithTime:(id)arg1;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;
@property(nonatomic) long long triggeringItemPlaylistOffset; // @synthesize triggeringItemPlaylistOffset=_triggeringItemPlaylistOffset;
@property(readonly, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
- (void)subItemDidEndViewingAtTime:(id)arg1;
@property(readonly, nonatomic) NSString *subitemId; // @synthesize subitemId=_subitemId;
- (_Bool)updateSkippedSubitemId:(id)arg1;
- (void)updateStoryLoggingInfo:(id)arg1;
- (void)updateTriggeringItemId:(id)arg1;
@property(readonly, nonatomic) NSDate *viewSessionStartTime; // @synthesize viewSessionStartTime=_viewSessionStartTime;
- (void)viewingSubitemWithId:(id)arg1;

@end

