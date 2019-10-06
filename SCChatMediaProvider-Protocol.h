//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCChatMediaProvider <NSObject>
- (_Bool)isLaguna;
- (_Bool)isLoading;
- (_Bool)isMediaDataLoadedInCache;
- (_Bool)isProcessingOrUploading;
- (NSString *)mediaId;
- (void)thumbnailImageWithCompletionHandler:(void (^)(UIImage *))arg1;
@end
