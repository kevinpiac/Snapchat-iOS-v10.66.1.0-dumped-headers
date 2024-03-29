//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol SCDecayingValueDelegate;

@interface SCDecayingValue : NSObject
{
    CADisplayLink *_displayLink;
    _Bool _initialTargetSetYet;
    _Bool _running;
    double _value;
    double _target;
    double _rateOfDecay;
    id <SCDecayingValueDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_tickDisplayLink;
- (void)dealloc;
@property(nonatomic) __weak id <SCDecayingValueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) double rateOfDecay; // @synthesize rateOfDecay=_rateOfDecay;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) double target; // @synthesize target=_target;
@property(readonly, nonatomic) double value; // @synthesize value=_value;

@end

