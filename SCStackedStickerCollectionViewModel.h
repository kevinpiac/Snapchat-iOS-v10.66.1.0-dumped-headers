//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

@class SOJUSticker;

@interface SCStackedStickerCollectionViewModel : SCSavableItemChatViewModel
{
    SOJUSticker *_sticker;
    long long _stickerLoadState;
}

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, nonatomic) long long stickerLoadState; // @synthesize stickerLoadState=_stickerLoadState;

@end

