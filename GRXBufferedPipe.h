//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GRXWriter.h"

#import "GRXWriteable-Protocol.h"

@class NSError, NSObject, NSString;
@protocol GRXWriteable, OS_dispatch_queue;

@interface GRXBufferedPipe : GRXWriter <GRXWriteable>
{
    NSError *_errorOrNil;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _state;
    id <GRXWriteable> _writeable;
}

+ (id)pipe;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)init;
- (void)setState:(long long)arg1;
@property(retain) id <GRXWriteable> writeable; // @synthesize writeable=_writeable;
- (void)startWithWriteable:(id)arg1;
- (long long)state;
- (void)writeValue:(id)arg1;
- (void)writesFinishedWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

