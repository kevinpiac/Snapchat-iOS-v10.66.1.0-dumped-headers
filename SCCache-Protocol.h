//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSSet, NSString;

@protocol SCCache <NSObject>
- (_Bool)contains:(NSString *)arg1;
- (void)contains:(NSString *)arg1 block:(void (^)(_Bool))arg2;
- (void)decreaseExpirationTo:(NSDate *)arg1 forKey:(NSString *)arg2;
- (void)increaseExpirationTo:(NSDate *)arg1 forKey:(NSString *)arg2;
- (void)invalidate;
@property(readonly, copy, nonatomic) NSString *kindName;
- (void)objectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 block:(void (^)(id <SCCache>, NSString *, id))arg3;
- (void)objectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 resetExpiration:(NSDate *)arg3 whenLessThanDelta:(double)arg4 block:(void (^)(id <SCCache>, NSString *, id))arg5;
- (void)objectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 resetExpiration:(NSDate *)arg3 whenLessThanDelta:(double)arg4 block:(void (^)(id <SCCache>, NSString *, id))arg5 returnExpired:(_Bool)arg6;
- (void)removeAllObjectsExceptKeys:(NSArray *)arg1 block:(void (^)(id <SCCache>))arg2;
- (void)removeAllObjectsFromMemoryWithBlock:(void (^)(id <SCCache>))arg1;
- (void)removeAllObjectsWithBlock:(void (^)(id <SCCache>))arg1;
- (void)removeExpiredContentWithBlock:(void (^)(id <SCCache>))arg1;
- (void)removeObjectForKey:(NSString *)arg1 block:(void (^)(id <SCCache>, NSString *, id))arg2;
- (void)removeObjectsForKeys:(NSSet *)arg1 block:(void (^)(id <SCCache>))arg2;
- (void)setObject:(id)arg1 dataEncoding:(NSData * (^)(id))arg2 forKey:(NSString *)arg3 expiration:(NSDate *)arg4 block:(void (^)(id <SCCache>, NSString *, id))arg5;
@property(nonatomic) _Bool underExperiment;
@end
