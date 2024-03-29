//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SCCameraTimer;

@protocol SCLensUserInterfaceDelegate <NSObject>
- (void)abortSnapRecordingIfNeeded;
- (UIView<SCCameraTimer> *)cameraTimer;
- (void)didSelectLens;
- (void)lensCarouselWasHiddenFromLens;
- (void)lensCarouselWasShownFromLens;
- (void)setAllInterfaceElementsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCameraButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setMemoriesGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowLensHints;
@end

