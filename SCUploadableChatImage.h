//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseUploadableChatMedia.h"

@class NSData;

@interface SCUploadableChatImage : SCBaseUploadableChatMedia
{
    NSData *_thumbnailData;
}

- (void).cxx_destruct;
- (_Bool)isZipped;
- (long long)mediaType;
- (void)setImage:(id)arg1;
- (void)thumbnailMediaData:(CDUnknownBlockType)arg1;

@end

