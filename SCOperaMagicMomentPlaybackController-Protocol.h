//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber;
@protocol SCOperaMagicMomentPlaybackControllerDelegate;

@protocol SCOperaMagicMomentPlaybackController <NSObject>
@property(nonatomic) __weak id <SCOperaMagicMomentPlaybackControllerDelegate> delegate;
- (long long)numberOfFramesBeforeToggleComplete;
- (void)prepareForPlaybackWithMagicMomentTime:(NSNumber *)arg1;
- (void)setMagicMomentEnabled:(_Bool)arg1 commands:(NSArray *)arg2;
@end
