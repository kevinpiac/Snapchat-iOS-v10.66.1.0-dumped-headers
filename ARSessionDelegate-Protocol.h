//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ARSessionObserver-Protocol.h"

@class ARFrame, ARSession, NSArray;

@protocol ARSessionDelegate <ARSessionObserver>

@optional
- (void)session:(ARSession *)arg1 didAddAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didRemoveAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateFrame:(ARFrame *)arg2;
@end
