//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDiskUtility : NSObject
{
}

+ (_Bool)_executeIterationOperation:(CDUnknownBlockType)arg1 fileUrl:(id)arg2 propertiesForKeys:(id)arg3;
+ (id)_formatSpaceToMiB:(unsigned long long)arg1;
+ (_Bool)_isGlobalScopedDirectory:(id)arg1;
+ (_Bool)_isUserScopedDirectory:(id)arg1;
+ (void)_traverseDirectory:(id)arg1 propertiesForKeys:(id)arg2 operation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_traverseDirectoryAndSubfolders:(id)arg1 propertiesForKeys:(id)arg2 operation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (unsigned long long)calculateDirectoryUsage:(id)arg1 cancelationToken:(id)arg2;
+ (_Bool)createDirectoryIfNecessary:(id)arg1 force:(_Bool)arg2 excludeFromBackup:(_Bool)arg3 error:(id *)arg4;
+ (id)currentOpenedFiles;
+ (id)directoryPathFromRegex:(id)arg1 basePath:(id)arg2;
+ (unsigned long long)freeDiskSpace:(id *)arg1;
+ (id)freeDiskSpaceInMiBString;
+ (unsigned long long)freeNodes:(id *)arg1;
+ (id)freeNodesString;
+ (int)numberOfOpenFiles;
+ (id)shortNameFromPath:(id)arg1;
+ (id)topOpenedFiles:(long long)arg1;
+ (unsigned long long)totalDiskSpace:(id *)arg1;
+ (id)totalDiskSpaceInMiBString;
+ (unsigned long long)totalNodes:(id *)arg1;
+ (id)totalNodesString;
+ (unsigned long long)totalStorageUsageWithCancelationToken:(id)arg1;
+ (void)traverseDirectory:(id)arg1 recurseSubfolders:(_Bool)arg2 propertiesForKeys:(id)arg3 operation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

