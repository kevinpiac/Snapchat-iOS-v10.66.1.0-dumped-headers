//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSArray, SCLagunaAppStatusCoordinatorDeviceState, SCSpectaclesDevice, SCUserSession;

@interface SCSpectaclesImportSectionViewModel : NSObject <IGListDiffable>
{
    long long _actionButtonType;
    _Bool _shouldShowHomeWifiInstructions;
    _Bool _shouldShowToolTip;
    SCUserSession *_userSession;
    SCLagunaAppStatusCoordinatorDeviceState *_status;
    SCSpectaclesDevice *_device;
    NSArray *_untransferredContent;
    NSArray *_transferredContent;
    NSArray *_transferringContent;
    long long _mode;
    NSArray *_cellViewModels;
}

+ (_Bool)_currentTimeCanDisplayHomeWifi;
+ (long long)_importCellActionButtonTypeForMode:(long long)arg1;
+ (long long)_importCellMessageTypeForMode:(long long)arg1;
+ (long long)_importProgressCellTypeForMode:(long long)arg1;
+ (_Bool)_shouldShowHomeWifiInstructionsForMode:(long long)arg1 device:(id)arg2;
- (void).cxx_destruct;
- (void)_resetCellViewModelsForCellTypes:(id)arg1;
- (void)_updateMode:(long long)arg1 device:(id)arg2 untransferredContent:(id)arg3 transferredContent:(id)arg4 transferringContent:(id)arg5;
- (void)_updateStateForMode;
@property(readonly, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(readonly, nonatomic) SCSpectaclesDevice *device; // @synthesize device=_device;
- (id)diffIdentifier;
- (id)initWithUserSession:(id)arg1 mode:(long long)arg2 device:(id)arg3 untransferredContent:(id)arg4 transferredContent:(id)arg5 transferringContent:(id)arg6;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) SCLagunaAppStatusCoordinatorDeviceState *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSArray *transferredContent; // @synthesize transferredContent=_transferredContent;
@property(readonly, nonatomic) NSArray *transferringContent; // @synthesize transferringContent=_transferringContent;
@property(readonly, nonatomic) NSArray *untransferredContent; // @synthesize untransferredContent=_untransferredContent;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

@end
