//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAStickerPackDownloadEvent.h"

@class NSNumber;

@interface SCAStickerPackDownloadFinish : SCAStickerPackDownloadEvent
{
    NSNumber *downloadTime;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDownloadTime;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (void)setDownloadTime:(long long)arg1;

@end

