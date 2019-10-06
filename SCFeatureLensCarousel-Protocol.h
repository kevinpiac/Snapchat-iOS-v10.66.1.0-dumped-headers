//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, SCLensesUIControllerState, SCObservable, SCReplyParameters;
@protocol SCCameraViewControllerLensDelegate;

@protocol SCFeatureLensCarousel <NSObject>
- (void)didSelectLens:(SCLens *)arg1;
@property(readonly, nonatomic) SCObservable *lensCarouselActivationStateObservable;
@property(nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate;
- (void)selectLens:(SCLens *)arg1;
- (void)selectLens:(SCLens *)arg1 switchCameraIfNeeded:(_Bool)arg2;
@property(readonly, nonatomic) SCObservable *selectedLensObservable;
- (void)setCameraPositionForLens:(SCLens *)arg1 completion:(void (^)(void))arg2;
- (void)setReplyParameters:(SCReplyParameters *)arg1;
- (SCLens *)turnLensesOnAndSelectFirstApplicableLens;
- (void)turnLensesOnWithActivationState:(SCLensesUIControllerState *)arg1;
@end

