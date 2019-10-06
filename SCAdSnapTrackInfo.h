//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCAdSnapCommonTrackInfo, SCAdToLensTrackInfo, SCCollectionAdTrackInfo, SCDeepLinkAdTrackInfo, SCLongformVideoAdTrackInfo, SCWebViewAdTrackInfo;

@interface SCAdSnapTrackInfo : NSObject <NSCopying>
{
    long long _adType;
    SCAdSnapCommonTrackInfo *_commonTrackInfo;
    SCDeepLinkAdTrackInfo *_deepLinkTrackInfo;
    SCLongformVideoAdTrackInfo *_longformTrackInfo;
    SCWebViewAdTrackInfo *_webvViewTrackInfo;
    SCCollectionAdTrackInfo *_collectionTrackInfo;
    SCAdToLensTrackInfo *_adToLensTrackInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAdToLensTrackInfo *adToLensTrackInfo; // @synthesize adToLensTrackInfo=_adToLensTrackInfo;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) SCCollectionAdTrackInfo *collectionTrackInfo; // @synthesize collectionTrackInfo=_collectionTrackInfo;
@property(readonly, copy, nonatomic) SCAdSnapCommonTrackInfo *commonTrackInfo; // @synthesize commonTrackInfo=_commonTrackInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCDeepLinkAdTrackInfo *deepLinkTrackInfo; // @synthesize deepLinkTrackInfo=_deepLinkTrackInfo;
- (unsigned long long)hash;
- (id)initWithAdType:(long long)arg1 commonTrackInfo:(id)arg2 deepLinkTrackInfo:(id)arg3 longformTrackInfo:(id)arg4 webvViewTrackInfo:(id)arg5 collectionTrackInfo:(id)arg6 adToLensTrackInfo:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLongformVideoAdTrackInfo *longformTrackInfo; // @synthesize longformTrackInfo=_longformTrackInfo;
@property(readonly, copy, nonatomic) SCWebViewAdTrackInfo *webvViewTrackInfo; // @synthesize webvViewTrackInfo=_webvViewTrackInfo;

@end

