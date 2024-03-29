//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScanCardShazamDelegate-Protocol.h"
#import "SCShazamShareControllerDelegate-Protocol.h"
#import "SCShazamUnifiedActionMenuDelegate-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCScanResultViewController, SCShazamOperaPresenter, SCShazamShareController, SCUnifiedActionMenuPresenter, SCUserSession;

@interface SCShazamActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCShazamUnifiedActionMenuDelegate, SCShazamShareControllerDelegate, SCScanCardShazamDelegate>
{
    SCScanResultViewController *_scanResultViewController;
    SCUserSession *_userSession;
    _Bool _hasOpenedSongInfo;
    SCUnifiedActionMenuPresenter *_shazamActionMenuPresenter;
    SCShazamShareController *_shazamShareController;
    SCShazamOperaPresenter *_shazamOperaPresenter;
}

- (void).cxx_destruct;
- (void)_deeplinkWithUrl:(id)arg1;
- (void)_listenWithSongInfo:(id)arg1;
- (void)_openActionMenuWithSongInfo:(id)arg1;
- (void)_openShazamWebViewSongInfo:(id)arg1 baseOperaView:(id)arg2 fromView:(id)arg3;
- (void)_sendSnapWithSongInfo:(id)arg1;
- (void)_systemShareWithSongInfo:(id)arg1;
- (id)initWithScanResultViewController:(id)arg1 userSession:(id)arg2;
- (void)shareControllerDidExitPreview;
- (void)shazamCardDidCancel;
- (void)shazamCardDidListenWithSongInfo:(id)arg1;
- (void)shazamCardDidOpenShazamActionMenuWithSongInfo:(id)arg1;
- (void)shazamCardDidOpenWebViewWithSongInfo:(id)arg1 baseOperaView:(id)arg2 fromView:(id)arg3;
- (void)shazamCardDidSendSnapWithSongInfo:(id)arg1;
- (void)shazamCardDidSystemShareWithSongInfo:(id)arg1;
- (void)shazamUnifiedActionMenu:(id)arg1 didCancelSongInfo:(id)arg2;
- (void)shazamUnifiedActionMenu:(id)arg1 didSendSongInfo:(id)arg2;
- (void)shazamUnifiedActionMenu:(id)arg1 didShareSongInfo:(id)arg2;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

