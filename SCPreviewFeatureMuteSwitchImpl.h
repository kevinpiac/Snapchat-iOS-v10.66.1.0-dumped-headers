//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureMuteSwitch-Protocol.h"

@class SCLabeledGrowingButton, SCPreviewConfiguration, SCPreviewView;
@protocol SCPreviewFeatureMuteSwitchDelegate;

@interface SCPreviewFeatureMuteSwitchImpl : SCFeature <SCPreviewFeatureMuteSwitch>
{
    SCPreviewView *_previewView;
    SCPreviewConfiguration *_configuration;
    SCLabeledGrowingButton *_button;
    _Bool _needsHintLabel;
    id <SCPreviewFeatureMuteSwitchDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_buttonPressed;
- (void)_setupHintLabel;
@property(readonly, nonatomic) SCLabeledGrowingButton *button;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCPreviewFeatureMuteSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPreviewConfiguration:(id)arg1;
@property(nonatomic) _Bool needsHintLabel; // @synthesize needsHintLabel=_needsHintLabel;
- (void)setUIEnabled:(_Bool)arg1;

@end

