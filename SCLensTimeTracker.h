//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SCLensTimeTracker : NSObject
{
    NSDate *_startDate;
    NSDate *_stopDate;
}

- (void).cxx_destruct;
- (void)start;
- (void)stop;
@property(readonly, nonatomic) double time;

@end

