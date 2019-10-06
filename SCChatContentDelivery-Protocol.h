//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSSet, NSString, SCChatMediaContent, SCStorySnapMediaContent;

@protocol SCChatContentDelivery <NSObject>
- (_Bool)contains:(NSString *)arg1;
- (void)downloadContentForConversationId:(NSString *)arg1 messageId:(NSString *)arg2 media:(SCChatMediaContent *)arg3 messageBodyType:(long long)arg4 userInitiated:(_Bool)arg5 useBoltUpload:(_Bool)arg6 senderUsername:(NSString *)arg7 completionBlock:(void (^)(_Bool, long long, NSDictionary *, long long, NSError *))arg8;
- (void)postProcessChatMedia:(SCChatMediaContent *)arg1 completionBlock:(void (^)(_Bool, long long, NSDictionary *))arg2;
- (void)postProcessStoryMedia:(SCStorySnapMediaContent *)arg1 completionBlock:(void (^)(_Bool))arg2;
- (void)removeContentForDedupeKeys:(NSSet *)arg1 completion:(void (^)(void))arg2;
- (void)retrieveContentAndOverlayForUnZippedMedia:(SCChatMediaContent *)arg1 completionBlock:(void (^)(NSData *, NSData *, _Bool))arg2;
- (void)retrieveContentForDedupeKey:(NSString *)arg1 completion:(void (^)(NSData *, _Bool))arg2;
- (void)saveLocalContent:(NSData *)arg1 dedupeKey:(NSString *)arg2 expirationDate:(NSDate *)arg3 isAuthoritative:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
@end

