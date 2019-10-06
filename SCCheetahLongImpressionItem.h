//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCCheetahLongImpressionItem : NSObject <NSCopying>
{
    _Bool _isProminent;
    _Bool _hasReplayOverlay;
    NSString *_identifier;
    NSString *_thumbnailId;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    NSString *_triggeringItemId;
    long long _itemPos;
    long long _source;
    NSString *_sectionIdentifier;
    NSString *_pageTypeSpecific;
    long long _pageType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasReplayOverlay; // @synthesize hasReplayOverlay=_hasReplayOverlay;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 thumbnailId:(id)arg2 storyLoggingInfo:(id)arg3 triggeringItemId:(id)arg4 itemPos:(long long)arg5 isProminent:(_Bool)arg6 source:(long long)arg7 sectionIdentifier:(id)arg8 hasReplayOverlay:(_Bool)arg9 pageTypeSpecific:(id)arg10 pageType:(long long)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isProminent; // @synthesize isProminent=_isProminent;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(readonly, copy, nonatomic) NSString *pageTypeSpecific; // @synthesize pageTypeSpecific=_pageTypeSpecific;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
@property(readonly, copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;

@end

