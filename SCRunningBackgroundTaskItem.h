//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCRunningBackgroundTaskItem : NSObject
{
    NSDate *_taskStartTimestamp;
    NSString *_taskName;
}

- (void).cxx_destruct;
- (id)initWithTaskName:(id)arg1 taskStartTime:(id)arg2;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(retain, nonatomic) NSDate *taskStartTimestamp; // @synthesize taskStartTimestamp=_taskStartTimestamp;

@end

