//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCWebServerBodyEncoder.h"

@interface SCWebServerGZipEncoder : SCWebServerBodyEncoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (void)close;
- (id)initWithResponse:(id)arg1 reader:(id)arg2;
- (_Bool)open:(id *)arg1;
- (id)readData:(id *)arg1;

@end

