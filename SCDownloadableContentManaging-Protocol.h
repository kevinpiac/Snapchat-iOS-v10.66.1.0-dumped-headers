//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDownloadableContent;

@protocol SCDownloadableContentManaging <NSObject>
- (void)requestContent:(SCDownloadableContent *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestNonAuthorizedContent:(SCDownloadableContent *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

