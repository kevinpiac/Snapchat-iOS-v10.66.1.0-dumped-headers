//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDeepLinkURL;

@interface SCSnapKitRequestParser : NSObject
{
    SCDeepLinkURL *_deepLinkUrl;
}

- (void).cxx_destruct;
- (id)_creativeKitLoggingDataForPayload:(id)arg1 metadata:(id)arg2 type:(long long)arg3;
- (id)_decodeParams:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyCameraPayload:(id)arg1 metadata:(id)arg2;
- (_Bool)_verifyPreviewPayload:(id)arg1 metadata:(id)arg2;
- (id)initWithDeepLinkUrl:(id)arg1;
- (id)verifyAndExtractMetadata;
- (id)verifyAndExtractPayloadWithType:(long long)arg1;

@end

