//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SCBloopsFullscreenViewInput, SCBloopsModel, SCBloopsReenactmentResult;

@protocol SCBloopsFullscreenModel <NSObject>
@property(readonly, nonatomic) id <SCBloopsModel> bloopModel;
- (void)enterVisibleState;
- (void)exitVisibleState;
@property(readonly, nonatomic) UIView<SCBloopsFullscreenViewInput> *fullscreenView;
@property(readonly, nonatomic) id <SCBloopsReenactmentResult> reenactmentResult;
- (void)refreshPlayerWithReenactmentResult:(id <SCBloopsReenactmentResult>)arg1;
- (void)releaseFullscreenPlayer;
@end
