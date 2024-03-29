//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCTV3ELMShrunkMeasurements, SCTV3ExpandedLocalMediaController, UIView;

@protocol SCTV3ExpandedLocalMediaControllerDelegate <NSObject>
- (void)flipCameraForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (_Bool)isAudioMutedForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (_Bool)isFrontCameraUsedForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (UIView *)localVideoViewForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (SCTV3ELMShrunkMeasurements *)shrunkMeasurementsForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
- (void)toggleAudioMuteForELMController:(SCTV3ExpandedLocalMediaController *)arg1;
@end

