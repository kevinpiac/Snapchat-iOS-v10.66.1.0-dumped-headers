//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface SCGalleryStreamingSnapPackage : NSObject <NSCopying>
{
    NSString *_snapId;
    NSURL *_mediaURL;
    NSDictionary *_postParameters;
    NSData *_encryptedOverlayBlob;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *encryptedOverlayBlob; // @synthesize encryptedOverlayBlob=_encryptedOverlayBlob;
- (unsigned long long)hash;
- (id)initWithSnapId:(id)arg1 mediaURL:(id)arg2 postParameters:(id)arg3 encryptedOverlayBlob:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSDictionary *postParameters; // @synthesize postParameters=_postParameters;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;

@end
