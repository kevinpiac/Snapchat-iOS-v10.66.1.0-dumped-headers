//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface SCSpectaclesDeviceManagerIdleWatch : NSObject
{
    _Bool _isIdle;
    NSCondition *_condition;
}

- (void).cxx_destruct;
- (void)awaitIsIdle;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
- (id)init;
- (void)setIsIdle:(_Bool)arg1;

@end

