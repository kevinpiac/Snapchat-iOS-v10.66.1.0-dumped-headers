//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryLeftSwipableViewController.h"

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, NSTimer, SCCloudSyncOperation, SCGalleryBackupFailedView, SCGradientView, SCHeader, SCLoadingIndicatorView, SCUserSession, UIButton, UILabel, UIProgressView, UITextView, UIView;
@protocol SCCanceling, SCObserving;

@interface SCGalleryBackupViewController : SCGalleryLeftSwipableViewController <SCHeaderDelegate, SCHeaderDataSource, SCNetworkConnectivityListener, SCCloudSyncStatusListener, SCTraceEnabled, SCPageNameLogging>
{
    SCUserSession *_userSession;
    _Bool _setIsBackupNowOnAppear;
    SCHeader *_header;
    NSString *_headerLabel;
    UILabel *_snapsLeftView;
    UIProgressView *_progressBar;
    UIButton *_overrideButton;
    SCGradientView *_bottomGradient;
    SCGradientView *_topGradient;
    _Bool _savedStatusHidden;
    long long _savedStatusStyle;
    id <SCObserving> _observeContext;
    id <SCObserving> _backupOnCellularObserveContext;
    unsigned long long _snapsLeft;
    UITextView *_debugView;
    UIView *_backgroundView;
    UIView *_contentView;
    _Bool _headerTransparent;
    SCLoadingIndicatorView *_spinner;
    _Bool _backupOnCellular;
    _Bool _isBackupNow;
    _Bool _travelModeEnabled;
    long long _networkConnectivityStatus;
    NSTimer *_progressTimer;
    double _startUploadTime;
    double _estimatedUploadTime;
    SCGalleryBackupFailedView *_backupFailedView;
    NSArray *_failedEntries;
    SCCloudSyncOperation *_firstOperation;
    NSString *_currentBackgroundOperationId;
    id <SCCanceling> _thumbnailRequest;
}

- (void).cxx_destruct;
- (void)_attachBackupFailedView;
- (void)_attachCompleteBackgroundView;
- (void)_attachContentView:(id)arg1;
- (void)_attachEntryBackgroundViewWithSnaps:(id)arg1 snapDetails:(id)arg2;
- (void)_attachPrivateBackgroundView;
- (void)_attachStoryBackgroundViewForOperation:(id)arg1;
- (_Bool)_canMakeProgress;
- (void)_cleanupSpinner;
- (void)_doubleTap:(id)arg1;
- (void)_ensureSpinner;
- (_Bool)_needsWaitWiFi;
- (void)_overridePressed:(id)arg1;
- (void)_resetProgress;
- (void)_setHeaderTransparent:(_Bool)arg1;
- (void)_setIsBackupNow:(_Bool)arg1;
- (void)_startProgress;
- (void)_stopProgress;
- (void)_timerFired:(id)arg1;
- (void)_updateFailedEntries;
- (void)_updateNetworkConnectivityStatus:(long long)arg1;
- (void)_updateOperations;
- (void)_updateOverrideButton;
- (void)_updateProgressBar;
- (void)_updateSnapsLeft;
- (void)_updateStatusText;
- (void)_updateUIWithStatusChanges;
- (id)backgroundColorForHeader;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)dealloc;
- (id)fontForHeader:(id)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (void)initGradients;
- (void)initHeader;
- (id)initWithUserSession:(id)arg1 setIsBackupNowOnAppear:(_Bool)arg2;
- (void)leftButtonPressed;
- (void)loadView;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (id)pageName;
- (id)pageViewName;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

