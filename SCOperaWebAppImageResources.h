//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCNetworkImage;

@interface SCOperaWebAppImageResources : NSObject <NSCopying>
{
    SCNetworkImage *_iconImage;
    SCNetworkImage *_loadingImage;
    SCNetworkImage *_logoImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCNetworkImage *iconImage; // @synthesize iconImage=_iconImage;
- (id)initWithIconImage:(id)arg1 loadingImage:(id)arg2 logoImage:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(readonly, copy, nonatomic) SCNetworkImage *logoImage; // @synthesize logoImage=_logoImage;

@end

