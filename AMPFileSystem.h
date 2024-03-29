//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, SCLogger;

@interface AMPFileSystem : NSObject
{
    NSFileManager *_fileManager;
    SCLogger *_scLogger;
}

- (void).cxx_destruct;
- (id)dataFromFileAtPath:(id)arg1;
- (id)dataFromFilesInDir:(id)arg1;
- (void)deleteFileAtPath:(id)arg1;
- (id)deleteFilesInDir:(id)arg1;
- (id)dictionariesFromFilesInDir:(id)arg1 withExtension:(id)arg2;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)initWithSCLogger:(id)arg1;
- (void)moveOldFile:(id)arg1 toNewLocation:(id)arg2;
- (_Bool)saveData:(id)arg1 toFileAtPath:(id)arg2;
@property(nonatomic) __weak SCLogger *scLogger; // @synthesize scLogger=_scLogger;

@end

