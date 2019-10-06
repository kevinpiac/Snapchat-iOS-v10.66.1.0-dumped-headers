//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCNetworkImage, SCSendToScrollLabelModel;

@interface SCCheetahSendToStoryViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    long long _rowIndex;
    NSString *_storyId;
    NSString *_mischiefId;
    NSString *_labelText;
    NSString *_officialFriendmoji;
    long long _itemType;
    SCNetworkImage *_previewImage;
    long long _contentMode;
    SCSendToScrollLabelModel *_scrollLabelModel;
    SCActionModel *_singleTapAction;
    SCActionModel *_longPressAction;
    double _thumbnailOpacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithRowIndex:(long long)arg1 storyId:(id)arg2 mischiefId:(id)arg3 labelText:(id)arg4 officialFriendmoji:(id)arg5 itemType:(long long)arg6 isSelected:(_Bool)arg7 previewImage:(id)arg8 contentMode:(long long)arg9 scrollLabelModel:(id)arg10 singleTapAction:(id)arg11 longPressAction:(id)arg12 thumbnailOpacity:(double)arg13;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly, copy, nonatomic) SCActionModel *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSString *officialFriendmoji; // @synthesize officialFriendmoji=_officialFriendmoji;
@property(readonly, copy, nonatomic) SCNetworkImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
@property(readonly, copy, nonatomic) SCActionModel *singleTapAction; // @synthesize singleTapAction=_singleTapAction;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) double thumbnailOpacity; // @synthesize thumbnailOpacity=_thumbnailOpacity;

@end

