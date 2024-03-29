//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSpectaclesCache : NSObject
{
    NSString *_userId;
}

+ (id)_directoryForUserId:(id)arg1;
+ (id)cachedUUID;
+ (void)clearCacheExceptUserId:(id)arg1;
+ (id)idleAnalyticsDirectory;
+ (id)logDirectory;
+ (id)spectaclesDirectory;
+ (unsigned long long)totalSizeOfCacheFiles;
- (void).cxx_destruct;
- (id)URLForCacheFileWithSuffix:(id)arg1;
- (void)_createCacheIfNecessary;
- (id)initWithUserId:(id)arg1;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)userDirectory;

@end

