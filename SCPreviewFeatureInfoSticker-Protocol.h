//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, SCInfoStickerView;
@protocol SCPerforming, SCPreviewFeatureParentViewControllerAccessing;

@protocol SCPreviewFeatureInfoSticker
@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> delegate;
- (void)disableExistingInfoStickerEditing;
- (void)handleSendingActionForInfoStickerType:(unsigned long long)arg1 usernames:(NSArray *)arg2 completionPerformer:(id <SCPerforming>)arg3 completion:(void (^)(NSString *, NSString *))arg4;
- (_Bool)hasInfoStickerOnSnapWithType:(unsigned long long)arg1;
- (void)insertInfoStickerWithStickerView:(SCInfoStickerView *)arg1 stickerType:(unsigned long long)arg2;
@end

