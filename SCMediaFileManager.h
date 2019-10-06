//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMediaFileManager : NSObject
{
}

+ (id)baseDirectoryForPersistentStorage:(_Bool)arg1;
+ (_Bool)clearContentsOfDirectoryAtPath_DEPRECATED:(id)arg1;
+ (void)clear_DEPRECATED;
+ (id)contentsOfDirectory_DEPRECATED:(id)arg1 persistentStorage:(_Bool)arg2;
+ (void)createBaseDirectoryIfNecessary:(id)arg1 persistentStorage:(_Bool)arg2;
+ (_Bool)fileExistsWithFilename_DEPRECATED:(id)arg1;
+ (_Bool)fileExistsWithFilename_DEPRECATED:(id)arg1 persistentStorage:(_Bool)arg2;
+ (id)fileURLForFilename_DEPRECATED:(id)arg1;
+ (id)fileURLForFilename_DEPRECATED:(id)arg1 persistentStorage:(_Bool)arg2;
+ (_Bool)moveItemAtPath_DEPRECATED:(id)arg1 toMediaDirectoryWithFilename:(id)arg2 error:(id *)arg3;
+ (_Bool)removeDataWithFilename_DEPRECATED:(id)arg1 error:(id *)arg2;
+ (_Bool)removeDataWithFilename_DEPRECATED:(id)arg1 error:(id *)arg2 persistentStorage:(_Bool)arg3;
+ (void)removeExpiredMediaForOwners_DEPRECATED:(id)arg1;
+ (void)removeExpiredMediaWithValidFilenames:(id)arg1 creationDate:(id)arg2 persistentStorage:(_Bool)arg3;
+ (_Bool)saveData_DEPRECATED:(id)arg1 toMediaDirectoryWithFilename:(id)arg2 error:(id *)arg3;
+ (_Bool)saveData_DEPRECATED:(id)arg1 toMediaDirectoryWithFilename:(id)arg2 error:(id *)arg3 persistentStorage:(_Bool)arg4;

@end
