//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStickerPickerScrollPerf : SCAUserTrackedEvent
{
    NSNumber *scrollTimeMs;
    NSNumber *fps;
    NSString *stickerPackIds;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getFps;
- (double)getPerUserSamplingRate;
- (long long)getScrollTimeMs;
- (id)getStickerPackIds;
- (void)setFps:(double)arg1;
- (void)setScrollTimeMs:(long long)arg1;
- (void)setStickerPackIds:(id)arg1;

@end

