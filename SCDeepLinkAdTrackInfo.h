//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDeepLinkAdTrackInfo : NSObject <NSCopying>
{
    _Bool _deepLinkFallbackToWebview;
    long long _deepLinkToAppCount;
    long long _deepLinkToAppInstallCount;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool deepLinkFallbackToWebview; // @synthesize deepLinkFallbackToWebview=_deepLinkFallbackToWebview;
@property(readonly, nonatomic) long long deepLinkToAppCount; // @synthesize deepLinkToAppCount=_deepLinkToAppCount;
@property(readonly, nonatomic) long long deepLinkToAppInstallCount; // @synthesize deepLinkToAppInstallCount=_deepLinkToAppInstallCount;
- (unsigned long long)hash;
- (id)initWithDeepLinkToAppCount:(long long)arg1 deepLinkToAppInstallCount:(long long)arg2 deepLinkFallbackToWebview:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;

@end
