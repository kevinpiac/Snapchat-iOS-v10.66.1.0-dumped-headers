//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCMapBitmojiSticker : NSObject <NSCopying>
{
    _Bool _shadow;
    NSString *_nonClusteredStickerId;
    NSString *_clusteredFacingLeftStickerId;
    NSString *_clusteredFacingRightStickerId;
    NSArray *_dynamicElements;
    double _opacity;
}

+ (id)defaultSticker;
+ (id)ghostModeSticker;
+ (id)stickerFromSCMT1Sticker:(id)arg1;
+ (id)stickerFromSCMT1Sticker:(id)arg1 forceNonClusteredRightFacing:(_Bool)arg2;
+ (id)stickerFromSCMT1StickerID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clusteredFacingLeftStickerId; // @synthesize clusteredFacingLeftStickerId=_clusteredFacingLeftStickerId;
@property(readonly, copy, nonatomic) NSString *clusteredFacingRightStickerId; // @synthesize clusteredFacingRightStickerId=_clusteredFacingRightStickerId;
- (id)copyWithNonClusteredStickerFacingRight:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSArray *dynamicElements; // @synthesize dynamicElements=_dynamicElements;
@property(readonly, nonatomic, getter=hasShadow) _Bool shadow; // @synthesize shadow=_shadow;
- (unsigned long long)hash;
- (id)initWithNonClusteredStickerId:(id)arg1 clusteredFacingLeftStickerId:(id)arg2 clusteredFacingRightStickerId:(id)arg3 shadow:(_Bool)arg4 dynamicElements:(id)arg5 opacity:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *nonClusteredStickerId; // @synthesize nonClusteredStickerId=_nonClusteredStickerId;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;

@end

