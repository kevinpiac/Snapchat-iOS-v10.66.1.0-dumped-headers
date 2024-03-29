//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureCameraUIArbitrator-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface SCFeatureCameraTooltipArbitratorImpl : NSObject <SCFeatureCameraUIArbitrator>
{
    NSArray *_contenders;
    NSMutableArray *_contenderConfigs;
    long long _visibleContenderIndex;
}

- (void).cxx_destruct;
- (void)_hideTooltipForContender:(id)arg1 animated:(_Bool)arg2;
- (long long)_indexOfContender:(id)arg1;
- (void)_showTooltipForContender:(id)arg1 animated:(_Bool)arg2;
- (id)_visibleContender;
- (id)initWithContenders:(id)arg1;
- (_Bool)isUIVisibleForContender:(id)arg1;
- (void)requestUIVisible:(_Bool)arg1 animated:(_Bool)arg2 forContender:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

