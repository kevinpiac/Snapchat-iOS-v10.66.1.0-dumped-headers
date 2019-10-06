//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ZZArchiveEntry.h"

@class NSData, NSDate;

@interface ZZOldArchiveEntry : ZZArchiveEntry
{
    struct ZZCentralFileHeader *_centralFileHeader;
    struct ZZLocalFileHeader *_localFileHeader;
}

- (_Bool)check:(out id *)arg1;
- (_Bool)checkCompression:(out id *)arg1;
@property(readonly, nonatomic) _Bool compressed;
@property(readonly, nonatomic) unsigned long long compressedSize;
- (unsigned short)compressionMethod;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) unsigned long long encoding;
- (id)fileData;
@property(readonly, nonatomic) unsigned short fileMode;
- (id)fileNameWithEncoding:(unsigned long long)arg1;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2;
@property(readonly, nonatomic) NSDate *lastModified;
- (struct CGDataProvider *)newDataProviderWithError:(out id *)arg1;
- (id)newDataWithError:(out id *)arg1;
- (id)newStreamWithError:(out id *)arg1;
- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
@property(readonly, nonatomic) NSData *rawFileName;
- (id)streamForData:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) unsigned long long uncompressedSize;

@end

