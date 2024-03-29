//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapAdsAdResponseRendition : NSObject <NSCopying, NSCoding>
{
    long long _width;
    long long _height;
    double _fileSize;
    NSString *_mediaUrl;
    long long _renditionType;
}

- (void).cxx_destruct;
- (long long)compareFileSize:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
- (double)getAspectRatio;
- (double)getFileSize;
- (long long)getHeight;
- (id)getMediaUrl;
- (long long)getQuality;
- (long long)getRenditionType;
- (id)getSizeStringBytes;
- (long long)getWidth;
@property(nonatomic) long long height; // @synthesize height=_height;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaUrl:(id)arg1 width:(long long)arg2 height:(long long)arg3 fileSize:(double)arg4 renditionType:(long long)arg5;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) long long width; // @synthesize width=_width;

@end

