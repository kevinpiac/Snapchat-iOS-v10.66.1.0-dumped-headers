//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletMediaParamsBuilder : NSObject
{
    NSNumber *_mediaType;
    NSString *_mediaId;
    NSString *_mediaMd5hash;
    NSNumber *_size;
    NSNumber *_createTime;
    NSString *_mediaFormat;
    NSArray *_facesList;
}

+ (id)withJUGalleryServletMediaParams:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreateTime:(id)arg1;
- (id)setCreateTimeValue:(long long)arg1;
- (id)setFacesList:(id)arg1;
- (id)setMediaFormat:(id)arg1;
- (id)setMediaFormatEnum:(long long)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaMd5hash:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setMediaTypeEnum:(long long)arg1;
- (id)setMediaTypeValue:(int)arg1;
- (id)setSize:(id)arg1;
- (id)setSizeValue:(long long)arg1;

@end
