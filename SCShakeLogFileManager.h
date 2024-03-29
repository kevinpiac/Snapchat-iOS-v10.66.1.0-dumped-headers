//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCShakeLogFileManager : NSObject
{
}

+ (id)_getBaseURL:(id)arg1 inPath:(id)arg2;
+ (id)_getCompressingPathForId:(id)arg1 inPath:(id)arg2;
+ (_Bool)_writeDataWithFileName:(id)arg1 data:(id)arg2 baseUrl:(id)arg3;
+ (_Bool)areLogsCompressedForId:(id)arg1 inPath:(id)arg2;
+ (_Bool)deleteAllLogsInPath:(id)arg1;
+ (id)getCompressedFilePath:(id)arg1 error:(id *)arg2 inPath:(id)arg3;
+ (long long)getCompressedFileSize:(id)arg1 inPath:(id)arg2;
+ (_Bool)removeTicketFolder:(id)arg1 inPath:(id)arg2;
+ (id)saveExtraAttachmentImages:(id)arg1 images:(id)arg2 inPath:(id)arg3;
+ (id)saveExtraAttachmentsVideos:(id)arg1 videos:(id)arg2 inPath:(id)arg3;
+ (_Bool)saveLogsToFileForShake:(id)arg1 logWriter:(id)arg2 inPath:(id)arg3;
+ (_Bool)saveOtherDataToFile:(id)arg1 data:(id)arg2 shakeId:(id)arg3 inPath:(id)arg4;
+ (_Bool)saveScreenshot:(id)arg1 screenshot:(id)arg2 inPath:(id)arg3;
+ (_Bool)saveVideo:(id)arg1 atPath:(id)arg2 inPath:(id)arg3;

@end

