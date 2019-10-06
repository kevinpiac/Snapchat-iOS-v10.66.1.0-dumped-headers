//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCLazy, SCUnifiedProfileStoriesUtilityActionHandler, SCUnifiedProfileViewController, SCUserSession;
@protocol SCUnifiedProfileShowCameraActionHandlerDelegate;

@interface SCUnifiedProfileShowCameraActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    SCUnifiedProfileStoriesUtilityActionHandler *_storiesUtilityActionHandler;
    SCLazy *_customStoriesDataFetcher;
    SCLazy *_snapKitAppStateController;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    id <SCUnifiedProfileShowCameraActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleShowCameraForSnap:(id)arg1;
- (void)_handleShowCameraForSnapForGroupId:(id)arg1;
- (void)_handleShowCameraForSnapForSnapchatter:(id)arg1;
- (void)_handleShowCameraForStoryPosting:(id)arg1 storyType:(long long)arg2;
@property(nonatomic) __weak id <SCUnifiedProfileShowCameraActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 storiesUtilityActionHandler:(id)arg2 customStoriesDataFetcher:(id)arg3 snapKitAppStateController:(id)arg4;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
