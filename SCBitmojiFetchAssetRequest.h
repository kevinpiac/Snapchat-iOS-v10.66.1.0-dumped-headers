//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCBitmojiFetchAssetRequest : NSObject <NSCopying>
{
    NSString *_imageURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithImageURL:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

