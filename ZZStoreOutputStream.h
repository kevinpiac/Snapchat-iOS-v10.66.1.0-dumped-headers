//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSError;
@protocol ZZChannelOutput;

@interface ZZStoreOutputStream : NSOutputStream
{
    id <ZZChannelOutput> _channelOutput;
    unsigned long long _status;
    NSError *_error;
    unsigned int _crc32;
    unsigned int _size;
}

- (void).cxx_destruct;
- (void)close;
@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
- (_Bool)hasSpaceAvailable;
- (id)initWithChannelOutput:(id)arg1;
- (void)open;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
