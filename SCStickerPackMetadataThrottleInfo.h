//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"
#import "SCStickerPackMetadataThrottleInfo-Protocol.h"

@class NSString;

@interface SCStickerPackMetadataThrottleInfo : NSObject <SCServerConfigListener, SCStickerPackMetadataThrottleInfo>
{
    _Bool _shouldThrottle;
    double _throttlePeriod;
}

- (void)_updateFromServerConfig:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)serverConfigDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool shouldThrottle; // @synthesize shouldThrottle=_shouldThrottle;
@property(readonly, nonatomic) double throttlePeriod; // @synthesize throttlePeriod=_throttlePeriod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
