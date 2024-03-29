//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCGallerySmartShareSnapPackage : NSObject <NSCopying>
{
    NSString *_mediaServerId;
    NSString *_key;
    NSString *_iv;
    NSString *_originalSnapId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMediaServerId:(id)arg1 key:(id)arg2 iv:(id)arg3 originalSnapId:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *mediaServerId; // @synthesize mediaServerId=_mediaServerId;
@property(readonly, copy, nonatomic) NSString *originalSnapId; // @synthesize originalSnapId=_originalSnapId;

@end

