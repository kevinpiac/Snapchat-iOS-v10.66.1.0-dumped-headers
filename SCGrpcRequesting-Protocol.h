//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, NSDictionary, NSString;
@protocol SCPerforming;

@protocol SCGrpcRequesting <NSObject>
- (void)rpcCallWithMessage:(GPBMessage *)arg1 host:(NSString *)arg2 path:(NSString *)arg3 additionalHeaders:(NSDictionary *)arg4 responseClass:(Class)arg5 callbackPerformer:(id <SCPerforming>)arg6 handler:(void (^)(GPBMessage *, NSError *))arg7;
@end

