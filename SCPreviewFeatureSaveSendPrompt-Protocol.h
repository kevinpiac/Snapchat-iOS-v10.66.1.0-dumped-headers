//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, SCSendToConfirmationViewModel;
@protocol SCPreviewFeatureSaveSendPromptDelegate;

@protocol SCPreviewFeatureSaveSendPrompt
@property(nonatomic) __weak id <SCPreviewFeatureSaveSendPromptDelegate> delegate;
- (NSArray *)getRecipientViewModels;
- (_Bool)isMyStorySelected;
- (NSArray *)selectedGroups;
- (NSArray *)selectedIndividualRecipients;
- (void)sendToPageDidShow;
@property(nonatomic) _Bool shouldSendWithoutSendToPage;
- (void)showSaveSendPromptWithSendConfirmationViewModel:(SCSendToConfirmationViewModel *)arg1;
@end

