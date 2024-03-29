//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack;

@protocol SOJUAdStorySnapImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens;
@property(readonly, copy, nonatomic) NSString *adType;
@property(readonly, copy, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall;
@property(readonly, copy, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink;
@property(readonly, copy, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage;
@property(readonly, copy, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo;
@property(readonly, copy, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage;
@property(readonly, copy, nonatomic) NSString *skipEvent;
@property(readonly, copy, nonatomic) NSNumber *snapIndex;
@property(readonly, copy, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe;
@property(readonly, copy, nonatomic) NSNumber *swipeUpCount;
@property(readonly, copy, nonatomic) SOJUAdThreeVImpressionTrack *threeV;
@end

