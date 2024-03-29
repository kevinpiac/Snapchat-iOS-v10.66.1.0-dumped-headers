//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class AVAsset, NSDate, NSURL, UIImage;

@protocol SCVideoTranscodingInputMediaProvider <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long frameRate;
@property(readonly, copy, nonatomic) UIImage *inputImage;
@property(readonly, copy, nonatomic) AVAsset *inputVideoAsset;
@property(readonly, copy, nonatomic) NSURL *rawVideoDataURL;
@property(readonly, copy, nonatomic) NSDate *videoCreateTimeUtc;
@property(readonly, nonatomic) long long videoOrientation;
@property(readonly, nonatomic) double videoPlaybackRate;
@property(readonly, nonatomic) struct CGAffineTransform videoTransform;
@end

