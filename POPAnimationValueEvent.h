//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "POPAnimationEvent.h"

@interface POPAnimationValueEvent : POPAnimationEvent
{
    id _value;
    id _velocity;
}

- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3;
@property(retain, nonatomic) id velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) id value; // @synthesize value=_value;

@end

