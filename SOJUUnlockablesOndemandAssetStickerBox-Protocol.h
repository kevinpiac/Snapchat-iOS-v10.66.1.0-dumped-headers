//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUUnlockablesOndemandAssetImageBox-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUUnlockablesOndemandAssetStickerBox <NSObject, NSCoding, NSCopying, SOJUUnlockablesOndemandAssetImageBox>
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, copy, nonatomic) NSString *imagePngBase64;
@property(readonly, copy, nonatomic) NSNumber *posX;
@property(readonly, copy, nonatomic) NSNumber *posY;
@property(readonly, copy, nonatomic) NSString *resourceUrl;
@property(readonly, copy, nonatomic) NSNumber *rotation;
@property(readonly, copy, nonatomic) NSString *templateId;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *width;
@end
