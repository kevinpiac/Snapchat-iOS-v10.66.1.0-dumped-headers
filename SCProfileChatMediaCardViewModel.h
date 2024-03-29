//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, SCActionModel, SCProfileChatMediaDataModel;

@interface SCProfileChatMediaCardViewModel : NSObject <NSCopying>
{
    SCProfileChatMediaDataModel *_chatMediaDataModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    NSData *_miniThumbnailData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCProfileChatMediaDataModel *chatMediaDataModel; // @synthesize chatMediaDataModel=_chatMediaDataModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithChatMediaDataModel:(id)arg1 tapActionModel:(id)arg2 longPressActionModel:(id)arg3 miniThumbnailData:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) NSData *miniThumbnailData; // @synthesize miniThumbnailData=_miniThumbnailData;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;

@end

