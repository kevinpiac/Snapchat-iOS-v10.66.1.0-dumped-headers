//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCServerConfigProvider <NSObject>
- (void)fetchServerConfigWithCompletion:(void (^)(NSError *, id <SCServerConfigResponse>))arg1 shouldInvalidateEtag:(_Bool)arg2;
@end

