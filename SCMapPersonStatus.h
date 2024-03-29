//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCMapBitmojiSticker, SCMapPersonStatusConstraint;

@interface SCMapPersonStatus : NSObject <NSCopying>
{
    NSString *_statusId;
    NSString *_speechText;
    SCMapBitmojiSticker *_sticker;
    SCMapPersonStatusConstraint *_constraint;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCMapPersonStatusConstraint *constraint; // @synthesize constraint=_constraint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStatusId:(id)arg1 speechText:(id)arg2 sticker:(id)arg3 constraint:(id)arg4;
- (_Bool)isCancelledAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *speechText; // @synthesize speechText=_speechText;
@property(readonly, copy, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;
@property(readonly, copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;

@end

