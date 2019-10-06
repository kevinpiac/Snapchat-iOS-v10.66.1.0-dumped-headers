//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMutableCircularString, SCQueuePerformer;

@interface SCShakeBetaLoggerBuffer : NSObject
{
    SCMutableCircularString *_string;
    SCQueuePerformer *_performer;
    long long _capacity;
    NSString *_fileName;
}

- (void).cxx_destruct;
- (void)appendLog:(id)arg1 key:(unsigned long long)arg2;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void)getLogData:(CDUnknownBlockType)arg1;
- (id)initWithCapacity:(long long)arg1 fileName:(id)arg2 performerLabel:(const char *)arg3 performerContext:(unsigned long long)arg4;

@end
