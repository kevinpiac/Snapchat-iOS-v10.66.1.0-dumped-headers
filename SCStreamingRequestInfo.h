//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SCSearchStreamingEncryptionInfo, SCStreamingRequestTrackingInfo;

@interface SCStreamingRequestInfo : NSObject <NSCopying>
{
    _Bool _authenticated;
    NSURL *_mediaURL;
    NSString *_mediaKey;
    NSDictionary *_postParameters;
    NSArray *_requestContexts;
    SCSearchStreamingEncryptionInfo *_encryptionInfo;
    SCStreamingRequestTrackingInfo *_trackingInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCSearchStreamingEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
- (unsigned long long)hash;
- (id)initWithMediaURL:(id)arg1 mediaKey:(id)arg2 postParameters:(id)arg3 authenticated:(_Bool)arg4 requestContexts:(id)arg5 encryptionInfo:(id)arg6 trackingInfo:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSDictionary *postParameters; // @synthesize postParameters=_postParameters;
@property(readonly, copy, nonatomic) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(readonly, copy, nonatomic) SCStreamingRequestTrackingInfo *trackingInfo; // @synthesize trackingInfo=_trackingInfo;

@end
