//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCDataObjectContext : NSObject
{
}

+ (id)sharedContextFor:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contextName;
- (void)destroyPersistentStore:(CDUnknownBlockType)arg1;
- (id)diskFileURL;
- (id)diskUsageReport;
- (void)dispatchOnceWithToken:(long long *)arg1 block:(CDUnknownBlockType)arg2;
- (void)installPersistentStore;
- (_Bool)isInsidePerformChanges;
- (id)observe:(Class)arg1 object:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void)performChanges:(CDUnknownBlockType)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (unsigned long long)totalCoreDataErrorCount;
- (void)unobserve:(id)arg1 objectClass:(Class)arg2 objectID:(id)arg3;

@end
