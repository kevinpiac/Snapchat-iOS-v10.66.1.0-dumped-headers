//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGlobalDirectories : NSObject
{
}

+ (id)_createGlobalScopedDirectoryForRoot:(id)arg1;
+ (id)_globalDirectory:(id)arg1 migratedFromSubdirectory:(id)arg2 error:(id *)arg3 rootDirectory:(id)arg4;
+ (_Bool)_migrateFromPath:(id)arg1 toPath:(id)arg2;
+ (id)globalCacheDirectory:(id)arg1 error:(id *)arg2;
+ (id)globalCacheDirectory:(id)arg1 migratedFromSubdirectory:(id)arg2 error:(id *)arg3;
+ (id)globalDocumentDirectory:(id)arg1 error:(id *)arg2;
+ (id)globalDocumentDirectory:(id)arg1 migratedFromSubdirectory:(id)arg2 error:(id *)arg3;

@end

