//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface ZZArchiveEntry : NSObject
{
}

+ (id)archiveEntryWithDirectoryName:(id)arg1;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 dataBlock:(CDUnknownBlockType)arg3;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 dataConsumerBlock:(CDUnknownBlockType)arg3;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 streamBlock:(CDUnknownBlockType)arg3;
+ (id)archiveEntryWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(CDUnknownBlockType)arg5 streamBlock:(CDUnknownBlockType)arg6 dataConsumerBlock:(CDUnknownBlockType)arg7;
- (_Bool)check:(id *)arg1;
@property(readonly, nonatomic) _Bool compressed;
@property(readonly, nonatomic) unsigned long long compressedSize;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) unsigned long long encoding;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) NSString *fileName;
- (id)fileNameWithEncoding:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDate *lastModified;
- (struct CGDataProvider *)newDataProviderWithError:(id *)arg1;
- (id)newDataWithError:(id *)arg1;
- (id)newStreamWithError:(id *)arg1;
- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
@property(readonly, nonatomic) NSData *rawFileName;
@property(readonly, nonatomic) unsigned long long uncompressedSize;

@end
