//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCUnlockableTracker.h"

@interface SCUnlockableGeoFilterTracker : SCUnlockableTracker
{
}

+ (id)_buildFilterImpressionTrackForInteraction:(id)arg1 tracker:(id)arg2;
+ (long long)attachmentTypeFromString:(id)arg1;
- (_Bool)_canTrack:(id)arg1 forType:(long long)arg2;
- (id)_createProtoTrackWithSnapInfo:(id)arg1 sojuImpressionData:(id)arg2;
- (void)_fireFilterCarouselInteractionWithSnapInfo:(id)arg1;
- (void)_updateInteraction:(id)arg1 existingInteraction:(id)arg2;
- (void)fireTrackWithSnapInfo:(id)arg1;
- (void)trackAttachmentViewForFilterId:(id)arg1 attachmentType:(id)arg2 openTimestamp:(id)arg3 viewTimeSec:(double)arg4;

@end

