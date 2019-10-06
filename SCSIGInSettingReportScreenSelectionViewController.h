//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCS2RSubScreenViewController.h"

#import "SCSIGScreenSelectionCellDelegate-Protocol.h"

@class NSString, SCSIGBaseShakeToReportViewController, SCUserSession;

@interface SCSIGInSettingReportScreenSelectionViewController : SCS2RSubScreenViewController <SCSIGScreenSelectionCellDelegate>
{
    SCSIGBaseShakeToReportViewController *_reportViewController;
    SCUserSession *_userSession;
    long long _mode;
}

- (void).cxx_destruct;
- (id)_createScreenCells;
- (_Bool)_shouldDisplayOutageBanner;
- (void)didSingleTapEntry:(id)arg1 featureNames:(id)arg2;
- (id)initWithMode:(long long)arg1 userSession:(id)arg2;
- (void)loadView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
