//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGrowingButton, SCPreferences, UIView;
@protocol SCLensExplorerButtonDelegate, SCLensExplorerStudySettingsProviderProtocol;

@interface SCLensExplorerButtonController : NSObject
{
    UIView *_parentView;
    SCGrowingButton *_lensFeedButton;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingProvider;
    SCPreferences *_userPreferences;
    id <SCLensExplorerButtonDelegate> _delegate;
    unsigned long long _iconTreatment;
}

- (void).cxx_destruct;
- (void)_lensFeedButtonPressed:(id)arg1;
- (void)_prepareLensFeedButton;
- (void)_setDefaultImage;
- (void)_updateBadge;
- (void)dealloc;
@property(nonatomic) __weak id <SCLensExplorerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long iconTreatment; // @synthesize iconTreatment=_iconTreatment;
- (id)initWithParentView:(id)arg1 studySettingProvider:(id)arg2 userPreferences:(id)arg3 delegate:(id)arg4;
- (_Bool)pointInsideButton:(struct CGPoint)arg1;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;

@end

