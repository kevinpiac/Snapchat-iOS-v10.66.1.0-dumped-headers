//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AVAsset, UIImage;

@interface SCStreamingMediaData : NSObject <NSCopying>
{
    UIImage *_previewImage;
    UIImage *_overlayImage;
    AVAsset *_videoAsset;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPreviewImage:(id)arg1 overlayImage:(id)arg2 videoAsset:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(readonly, copy, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, copy, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;

@end

