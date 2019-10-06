//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, SOJUSnapMetadata;

@protocol SCChatMediaContentProvider <NSObject>
- (NSString *)chatIV;
- (NSString *)chatKey;
- (NSString *)chatMediaID;
- (NSString *)creatorAttribution;
- (double)duration;
- (NSDictionary *)groupIdToMediaIdDownloadUrlMap;
- (double)height;
- (_Bool)isInfiniteDuration;
- (_Bool)isZipped;
- (long long)mediaContentType;
- (NSData *)miniThumbnailData;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(NSString *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (NSString *)snapAttachmentUrl;
- (SOJUSnapMetadata *)snapMetadata;
- (NSString *)venueId;
- (double)width;
@end
