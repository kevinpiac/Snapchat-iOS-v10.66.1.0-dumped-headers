//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GRXImmediateWriter.h"

@interface GRXImmediateSingleWriter : GRXImmediateWriter
{
    id _value;
    long long _state;
}

+ (id)writerWithValue:(id)arg1;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (void)setState:(long long)arg1;
- (void)startWithWriteable:(id)arg1;
- (long long)state;

@end

