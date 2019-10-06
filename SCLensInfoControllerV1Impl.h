//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensInfoController-Protocol.h"

@class FBKVOController, NSString, SCGrowingButton, SCLensInfoPresenterV1, SCPreferences, UILabel, UIView;
@protocol SCLensInfoViewModelProtocol;

@interface SCLensInfoControllerV1Impl : NSObject <SCLensInfoController>
{
    _Bool _observing;
    UIView *_view;
    UIView *_hidableContainer;
    UILabel *_dateLabel;
    SCGrowingButton *_infoButton;
    SCLensInfoPresenterV1 *_lensInfoPresenter;
    SCPreferences *_userPreferences;
    FBKVOController *_kvoController;
    id <SCLensInfoViewModelProtocol> _lensInfoViewModel;
}

- (void).cxx_destruct;
- (void)addLensInfoCollectionView;
- (void)createDataLabel;
- (void)createHidableContainer;
- (void)createInfoButton;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)dealloc;
@property(retain, nonatomic) UIView *hidableContainer; // @synthesize hidableContainer=_hidableContainer;
- (void)hide;
@property(retain, nonatomic) SCGrowingButton *infoButton; // @synthesize infoButton=_infoButton;
- (id)initWithUserUserPreferences:(id)arg1 lensInfoViewModel:(id)arg2;
- (_Bool)isPointInsideButton:(struct CGPoint)arg1;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SCLensInfoPresenterV1 *lensInfoPresenter; // @synthesize lensInfoPresenter=_lensInfoPresenter;
@property(retain, nonatomic) id <SCLensInfoViewModelProtocol> lensInfoViewModel; // @synthesize lensInfoViewModel=_lensInfoViewModel;
- (void)observeValueChanging;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) SCPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)show;
- (void)unobserveAll;
- (void)updateLensInfoVisibility:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

