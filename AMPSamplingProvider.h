//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AMPSamplingProvider : NSObject
{
    NSNumber *_minPerUserSamplingRate;
}

- (void).cxx_destruct;
- (double)_randomFloatValueBetweenZeroAndOne;
- (_Bool)_shouldLogFromPercent:(double)arg1;
- (id)initWithConfigSamplingRate:(id)arg1;
@property(readonly, nonatomic) NSNumber *minPerUserSamplingRate; // @synthesize minPerUserSamplingRate=_minPerUserSamplingRate;
- (_Bool)shouldLogEvent:(id)arg1;

@end

