//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCTV3CallRequest;

@protocol SCTalkRPC <NSObject>
- (void)fetchCognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 successBlock:(void (^)(id <SCTAuth>))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (void)fetchSharedARAuthForExperienceId:(NSString *)arg1 participantId:(long long)arg2 successBlock:(void (^)(id <SCTAuth>))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (void)fetchTalkAuthForConvoIds:(NSArray *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
- (void)sendPushNotification:(id <SCTV3CallRequest>)arg1 successBlock:(void (^)(NSString *, NSArray *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
@end

