//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SCManagedVideoCapturerTimeObserverDelegate;

@interface SCManagedVideoCapturerTimeObserver : NSObject
{
    NSMutableArray *_tasks;
    _Bool _isProcessing;
    id <SCManagedVideoCapturerTimeObserverDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addTimedTask:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)processTime:(CDStruct_1b6d18a9)arg1 sessionStartTimeDelayInSecond:(double)arg2;

@end
