//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL;

@interface SCM3U8Variant : NSObject <NSCopying>
{
    NSURL *_videoManifestURL;
    NSURL *_audioManifestURL;
    NSURL *_iframeManifestURL;
    unsigned long long _bandwidth;
    struct CGSize _resolution;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *audioManifestURL; // @synthesize audioManifestURL=_audioManifestURL;
@property(readonly, nonatomic) unsigned long long bandwidth; // @synthesize bandwidth=_bandwidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSURL *iframeManifestURL; // @synthesize iframeManifestURL=_iframeManifestURL;
- (id)initWithVideoManifestURL:(id)arg1 audioManifestURL:(id)arg2 iframeManifestURL:(id)arg3 bandwidth:(unsigned long long)arg4 resolution:(struct CGSize)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(readonly, copy, nonatomic) NSURL *videoManifestURL; // @synthesize videoManifestURL=_videoManifestURL;

@end

