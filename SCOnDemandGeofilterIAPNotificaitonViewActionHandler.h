//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterWebViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, NSTimer, UINavigationController;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterIAPNotificaitonViewActionHandler : NSObject <TTTAttributedLabelDelegate, SCOnDemandGeofilterWebViewControllerDelegate>
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    NSTimer *_timerForHideIAPNotificaitonView;
    CDUnknownBlockType _dismissHandler;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
- (void)_presentWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)_submitPurchase:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didTapIAPNotification:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)dismissNotificationView;
- (id)geofilterSession;
- (id)initWithNavgationController:(id)arg1 geofilterSession:(id)arg2;
- (void)invalidateDismissTimer;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)resetDismissTimer:(double)arg1;
- (id)updateValidatedItem:(id)arg1;
- (void)webViewWasDismissed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
