//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;

@interface SCPlayerLooper : NSObject
{
    _Bool _isPaused;
    AVPlayer *_player;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2;
- (void)loop:(id)arg1;
- (void)pause;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)resume;

@end

