//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface SCDelayedRunningBlock : NSObject
{
    CDUnknownBlockType _block;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)run;

@end

