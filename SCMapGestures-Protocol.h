//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@protocol SCMapGestures <NSObject>
- (NSArray *)currentlyRecognizingGestures;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
- (void)notifyGestureDidBegin;
- (void)notifyGestureDidEnd;
- (void)notifyGestureIsChanging;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *quickZoomGestureRecognizer;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *tiltGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer;
@end
