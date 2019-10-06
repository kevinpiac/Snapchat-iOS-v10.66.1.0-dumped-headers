//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, SCLongformShowWatchedState, SCPublisherAdMetadata;

@interface SCLongformShowOperaDataModel : NSObject <NSCopying>
{
    _Bool _allowProfilePresentation;
    NSString *_profileId;
    NSString *_showId;
    long long _publisherId;
    long long _editionId;
    NSString *_publisherName;
    NSString *_showName;
    NSURL *_logoURL;
    NSURL *_horizontalLogoURL;
    long long _showType;
    long long _episodeNumber;
    long long _seasonNumber;
    unsigned long long _publishTimestampMs;
    NSURL *_deeplinkURL;
    SCPublisherAdMetadata *_adMetadata;
    NSNumber *_discoverFeedStoryDedupeFp;
    NSArray *_snaps;
    SCLongformShowWatchedState *_watchedState;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCPublisherAdMetadata *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(readonly, nonatomic) _Bool allowProfilePresentation; // @synthesize allowProfilePresentation=_allowProfilePresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, copy, nonatomic) NSNumber *discoverFeedStoryDedupeFp; // @synthesize discoverFeedStoryDedupeFp=_discoverFeedStoryDedupeFp;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
@property(readonly, nonatomic) long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSURL *horizontalLogoURL; // @synthesize horizontalLogoURL=_horizontalLogoURL;
- (id)initWithProfileId:(id)arg1 showId:(id)arg2 publisherId:(long long)arg3 editionId:(long long)arg4 publisherName:(id)arg5 showName:(id)arg6 logoURL:(id)arg7 horizontalLogoURL:(id)arg8 showType:(long long)arg9 episodeNumber:(long long)arg10 seasonNumber:(long long)arg11 publishTimestampMs:(unsigned long long)arg12 deeplinkURL:(id)arg13 adMetadata:(id)arg14 allowProfilePresentation:(_Bool)arg15 discoverFeedStoryDedupeFp:(id)arg16 snaps:(id)arg17 watchedState:(id)arg18;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
@property(readonly, nonatomic) unsigned long long publishTimestampMs; // @synthesize publishTimestampMs=_publishTimestampMs;
@property(readonly, nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(readonly, copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(readonly, nonatomic) long long showType; // @synthesize showType=_showType;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) SCLongformShowWatchedState *watchedState; // @synthesize watchedState=_watchedState;

@end

