//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCLabeledGrowingButton;
@protocol SCPreviewFeatureMuteSwitchDelegate;

@protocol SCPreviewFeatureMuteSwitch
@property(readonly, nonatomic) SCLabeledGrowingButton *button;
@property(nonatomic) __weak id <SCPreviewFeatureMuteSwitchDelegate> delegate;
@property(nonatomic) _Bool needsHintLabel;
- (void)setUIEnabled:(_Bool)arg1;
@end

