//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCAdResponseAdDataV2, SCNetworkImage;

@interface SCCheetahPromotedStory : NSObject <NSCopying, NSCoding>
{
    NSString *_headline;
    NSArray *_snaps;
    SCNetworkImage *_iconNetworkImage;
    SCNetworkImage *_thumbnailNetworkImage;
    NSString *_requestId;
    NSString *_serveItemId;
    NSString *_brandName;
    NSString *_adId;
    SCAdResponseAdDataV2 *_adResponse;
    NSString *_trackUrl;
    NSString *_sojuTrackUrl;
    NSString *_protoTrackUrl;
    NSString *_rawUserData;
    NSString *_rawAdData;
    NSArray *_thirdPartyImpressionTrackUrls;
    NSArray *_thirdPartyImpressionClickUrls;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) SCAdResponseAdDataV2 *adResponse; // @synthesize adResponse=_adResponse;
@property(readonly, copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) SCNetworkImage *iconNetworkImage; // @synthesize iconNetworkImage=_iconNetworkImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeadline:(id)arg1 snaps:(id)arg2 iconNetworkImage:(id)arg3 thumbnailNetworkImage:(id)arg4 requestId:(id)arg5 serveItemId:(id)arg6 brandName:(id)arg7 adId:(id)arg8 adResponse:(id)arg9 trackUrl:(id)arg10 sojuTrackUrl:(id)arg11 protoTrackUrl:(id)arg12 rawUserData:(id)arg13 rawAdData:(id)arg14 thirdPartyImpressionTrackUrls:(id)arg15 thirdPartyImpressionClickUrls:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *protoTrackUrl; // @synthesize protoTrackUrl=_protoTrackUrl;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSString *sojuTrackUrl; // @synthesize sojuTrackUrl=_sojuTrackUrl;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionClickUrls; // @synthesize thirdPartyImpressionClickUrls=_thirdPartyImpressionClickUrls;
@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionTrackUrls; // @synthesize thirdPartyImpressionTrackUrls=_thirdPartyImpressionTrackUrls;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailNetworkImage; // @synthesize thumbnailNetworkImage=_thumbnailNetworkImage;
@property(readonly, copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;

@end
