//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCPreviewExporter, SnapVideoFilter;

@protocol SCPreviewExporterDelegate
- (double)contentTargetAspectRatio;
- (_Bool)hasAnimatedContent;
- (void)previewExporter:(SCPreviewExporter *)arg1 didInitVideoFilter:(SnapVideoFilter *)arg2;
- (void)setupAudioDataAndLensForVideoFilter:(SnapVideoFilter *)arg1;
@end

