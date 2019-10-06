//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LSAVideoPlayerProtocol <NSObject>
- (struct __CVBuffer *)copyNextFrame;
@property(readonly, nonatomic) NSString *filepath;
@property(readonly, nonatomic) _Bool isReady;
- (void)pause;
@property(readonly, nonatomic) int playCount;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
- (void)prepareWithRate:(float)arg1 loop:(_Bool)arg2;
- (void)resume;
@property(nonatomic) double volume;
@end
