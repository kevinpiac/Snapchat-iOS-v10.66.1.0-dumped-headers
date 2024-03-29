//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdInfo, SCAttributionInfo, SCStoryElementDebug, SCStoryElementMetrics, SCStoryElement_HtmlInfo, SCStoryElement_SnapInfo, SCStoryElement_WebMediaInfo, SCUserAction;

@interface SCStoryElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) SCAttributionInfo *attributionInfo; // @dynamic attributionInfo;
@property(nonatomic) long long captureTimestamp; // @dynamic captureTimestamp;
@property(readonly, nonatomic) int contentInfoOneOfCase; // @dynamic contentInfoOneOfCase;
@property(nonatomic) int contentType; // @dynamic contentType;
@property(retain, nonatomic) SCStoryElementDebug *debugInfo; // @dynamic debugInfo;
@property(nonatomic) int deleteAction; // @dynamic deleteAction;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) _Bool hasAdInfo; // @dynamic hasAdInfo;
@property(nonatomic) _Bool hasAttributionInfo; // @dynamic hasAttributionInfo;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasMetrics; // @dynamic hasMetrics;
@property(nonatomic) _Bool hasPressAndHoldAction; // @dynamic hasPressAndHoldAction;
@property(nonatomic) _Bool hasSwipeDownAction; // @dynamic hasSwipeDownAction;
@property(nonatomic) _Bool hasSwipeLeftAction; // @dynamic hasSwipeLeftAction;
@property(nonatomic) _Bool hasSwipeRightAction; // @dynamic hasSwipeRightAction;
@property(nonatomic) _Bool hasSwipeUpAction; // @dynamic hasSwipeUpAction;
@property(nonatomic) _Bool hasTapAction; // @dynamic hasTapAction;
@property(retain, nonatomic) SCStoryElement_HtmlInfo *htmlInfo; // @dynamic htmlInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isDeletable; // @dynamic isDeletable;
@property(nonatomic) _Bool isReportable; // @dynamic isReportable;
@property(nonatomic) _Bool isSaveable; // @dynamic isSaveable;
@property(nonatomic) _Bool loop; // @dynamic loop;
@property(retain, nonatomic) SCStoryElementMetrics *metrics; // @dynamic metrics;
@property(nonatomic) int minimumDurationMs; // @dynamic minimumDurationMs;
@property(nonatomic) _Bool needsModeration; // @dynamic needsModeration;
@property(nonatomic) int prefetchTtlMs; // @dynamic prefetchTtlMs;
@property(retain, nonatomic) SCUserAction *pressAndHoldAction; // @dynamic pressAndHoldAction;
@property(copy, nonatomic) NSString *previewURL; // @dynamic previewURL;
@property(nonatomic) _Bool shouldPrefetch; // @dynamic shouldPrefetch;
@property(retain, nonatomic) SCStoryElement_SnapInfo *snapInfo; // @dynamic snapInfo;
@property(copy, nonatomic) NSString *sssId; // @dynamic sssId;
@property(nonatomic) long long sunriseTimestamp; // @dynamic sunriseTimestamp;
@property(nonatomic) long long sunsetTimestamp; // @dynamic sunsetTimestamp;
@property(retain, nonatomic) SCUserAction *swipeDownAction; // @dynamic swipeDownAction;
@property(retain, nonatomic) SCUserAction *swipeLeftAction; // @dynamic swipeLeftAction;
@property(retain, nonatomic) SCUserAction *swipeRightAction; // @dynamic swipeRightAction;
@property(retain, nonatomic) SCUserAction *swipeUpAction; // @dynamic swipeUpAction;
@property(retain, nonatomic) SCUserAction *tapAction; // @dynamic tapAction;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(nonatomic) int version; // @dynamic version;
@property(retain, nonatomic) SCStoryElement_WebMediaInfo *webMediaInfo; // @dynamic webMediaInfo;

@end

