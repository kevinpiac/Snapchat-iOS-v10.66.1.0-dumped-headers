//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCFuture;

@protocol SCManagedURLProtocol <NSObject>
- (void)adjustReferenceCount:(NSString *)arg1 delta:(long long)arg2;
- (void)flushMetadata:(NSString *)arg1;
- (SCFuture *)metadataForKey:(NSString *)arg1;
@end

