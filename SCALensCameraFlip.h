//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCALensCameraFlipBase.h"

@class NSString;

@interface SCALensCameraFlip : SCALensCameraFlipBase
{
    long long lensSource;
    NSString *filterLensId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (long long)getLensSource;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setFilterLensId:(id)arg1;
- (void)setLensSource:(long long)arg1;

@end

