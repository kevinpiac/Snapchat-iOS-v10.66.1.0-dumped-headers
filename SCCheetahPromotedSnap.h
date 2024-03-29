//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedAdToLens;

@interface SCCheetahPromotedSnap : NSObject <NSCopying, NSCoding>
{
    NSString *_snapId;
    NSString *_snapUrl;
    NSString *_headline;
    NSString *_brandName;
    NSString *_requestId;
    NSString *_serveItemId;
    NSString *_adId;
    NSString *_adKey;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    double _mediaDurationSecs;
    long long _mediaType;
    SCDiscoverFeedAdToLens *_adToLens;
    NSString *_politicalAdPayingAdvertiserName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(readonly, copy, nonatomic) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(readonly, copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property(readonly, copy, nonatomic) SCDiscoverFeedAdToLens *adToLens; // @synthesize adToLens=_adToLens;
@property(readonly, copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapId:(id)arg1 snapUrl:(id)arg2 headline:(id)arg3 brandName:(id)arg4 requestId:(id)arg5 serveItemId:(id)arg6 adId:(id)arg7 adKey:(id)arg8 adPlacementId:(id)arg9 adLineItemId:(id)arg10 mediaDurationSecs:(double)arg11 mediaType:(long long)arg12 adToLens:(id)arg13 politicalAdPayingAdvertiserName:(id)arg14;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double mediaDurationSecs; // @synthesize mediaDurationSecs=_mediaDurationSecs;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *politicalAdPayingAdvertiserName; // @synthesize politicalAdPayingAdvertiserName=_politicalAdPayingAdvertiserName;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *snapUrl; // @synthesize snapUrl=_snapUrl;

@end

