//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSError, NSMutableData;

@interface ZZInflateInputStream : NSInputStream
{
    NSInputStream *_upstream;
    NSMutableData *_readBuffer;
    unsigned long long _status;
    NSError *_error;
    struct z_stream_s _stream;
}

+ (id)decompressData:(id)arg1 withUncompressedSize:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)close;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (id)initWithStream:(id)arg1;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
