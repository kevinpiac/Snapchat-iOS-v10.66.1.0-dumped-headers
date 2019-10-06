//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStickerPackPreview : SCAUserTrackedEvent
{
    NSNumber *viewTimeSec;
    NSNumber *loadingTimeSec;
    NSNumber *packExpanded;
    long long sectionName;
    long long stickerSourceTab;
    NSString *snapSessionId;
    NSString *stickerSessionId;
    NSString *stickerPackId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getLoadingTimeSec;
- (_Bool)getPackExpanded;
- (double)getPerUserSamplingRate;
- (long long)getSectionName;
- (id)getSnapSessionId;
- (id)getStickerPackId;
- (id)getStickerSessionId;
- (long long)getStickerSourceTab;
- (double)getViewTimeSec;
- (id)init;
- (void)setLoadingTimeSec:(double)arg1;
- (void)setPackExpanded:(_Bool)arg1;
- (void)setSectionName:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStickerPackId:(id)arg1;
- (void)setStickerSessionId:(id)arg1;
- (void)setStickerSourceTab:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end
