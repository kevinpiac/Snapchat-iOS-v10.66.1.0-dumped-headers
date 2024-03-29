//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCChatMediaContentMetadataBuilder : NSObject
{
    NSString *_mediaId;
    long long _mediaLoadState;
    long long _mediaUploadState;
}

+ (id)chatMediaContentMetadata;
+ (id)chatMediaContentMetadataFromExistingChatMediaContentMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withMediaId:(id)arg1;
- (id)withMediaLoadState:(long long)arg1;
- (id)withMediaUploadState:(long long)arg1;

@end

