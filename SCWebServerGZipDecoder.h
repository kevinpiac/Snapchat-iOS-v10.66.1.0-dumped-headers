//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCWebServerBodyDecoder.h"

@interface SCWebServerGZipDecoder : SCWebServerBodyDecoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (_Bool)close:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;

@end
