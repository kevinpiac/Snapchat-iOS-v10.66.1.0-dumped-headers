//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol SCStickerProtocol;

@protocol SCOnDemandGeofilterStickerMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) double scale;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker;
@end
