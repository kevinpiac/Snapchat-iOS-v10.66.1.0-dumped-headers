//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCWebViewAdTrackInfo : NSObject <NSCopying>
{
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    _Bool _isPixelCookieAvailable;
    double _visiblePageLoadTimeSeconds;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3 isPixelCookieAvailable:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isPixelCookieAvailable; // @synthesize isPixelCookieAvailable=_isPixelCookieAvailable;
@property(readonly, nonatomic) _Bool loadedOnEntry; // @synthesize loadedOnEntry=_loadedOnEntry;
@property(readonly, nonatomic) _Bool loadedOnExit; // @synthesize loadedOnExit=_loadedOnExit;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds; // @synthesize visiblePageLoadTimeSeconds=_visiblePageLoadTimeSeconds;

@end
