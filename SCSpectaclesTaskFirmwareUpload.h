//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class NSData, NSFileHandle;

@interface SCSpectaclesTaskFirmwareUpload : SCSpectaclesTask
{
    unsigned long long _bytesSent;
    unsigned long long _fileSize;
    unsigned long long _chunkSize;
    NSFileHandle *_fileHandle;
    NSData *_currentChunk;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(retain, nonatomic) NSData *currentChunk; // @synthesize currentChunk=_currentChunk;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (_Bool)handleResponse:(id)arg1;
- (id)initWithFilepath:(id)arg1 device:(id)arg2;
- (_Bool)isFinished;
- (id)nextRequest:(long long)arg1;
- (unsigned long long)type;

@end

