//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCReportAdapter : NSObject
{
}

+ (id)shared;
+ (void)showNotificationWithSuccess:(_Bool)arg1;
- (void)_sendChatMessageV3ReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendAdReport;
- (void)sendDiscoverTileReport:(id)arg1 userSession:(id)arg2;
- (void)sendHighlightsSnapReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendHighlightsTileReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendLensReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendMapStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendPublicUserStoriesReport:(id)arg1 userSession:(id)arg2;
- (void)sendPublisherStoryReport:(id)arg1 userSession:(id)arg2;
- (void)sendReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendSearchDynamicStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendSnapReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendStoryReportWithContext:(id)arg1 userSession:(id)arg2;
- (void)sendUserReportWithContext:(id)arg1 userSession:(id)arg2;

@end
