//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@protocol SOJUCommerceImageDetails <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *externalImageId;
@property(readonly, copy, nonatomic) NSNumber *imageHeight;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSNumber *imageWidth;
@property(readonly, copy, nonatomic) NSDictionary *imagemap;
@end

