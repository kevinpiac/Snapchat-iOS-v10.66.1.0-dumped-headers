//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAudioProcessWavFileMixer : NSObject
{
    float *_audioData;
    unsigned int _audioDataLength;
    unsigned int _audioDataCurrentOffset;
}

- (int)_readInWavFileAsynchronously:(id)arg1;
- (void)dealloc;
- (id)initWithWavFilePath:(id)arg1;
- (int)mixWavFileIntoBufferList:(struct AudioBufferList *)arg1;

@end

