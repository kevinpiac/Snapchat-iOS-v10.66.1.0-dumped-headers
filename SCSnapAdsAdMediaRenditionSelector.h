//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCSnapAdsConfigAdapter;

@interface SCSnapAdsAdMediaRenditionSelector : NSObject
{
    id <SCSnapAdsConfigAdapter> _configAdapter;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (double)getDownloadLatency:(id)arg1 downloadBandwidth:(long long)arg2;
- (id)getHigherQualityRendition:(id)arg1 and:(id)arg2;
- (id)getOptimalAdMediaRendition:(id)arg1 adType:(long long)arg2;
- (id)getRenditionWithClosestHigherAspectRatio:(id)arg1 and:(id)arg2;
- (id)getSmallerRendition:(id)arg1 and:(id)arg2;
- (id)initWithConfigAdapter:(id)arg1;
- (id)initWithScreenSize:(struct CGSize)arg1 configAdapter:(id)arg2;

@end

