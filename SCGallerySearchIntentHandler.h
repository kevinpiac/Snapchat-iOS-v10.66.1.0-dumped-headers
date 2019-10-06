//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntentHandler-Protocol.h"
#import "SCSearchModalPresenterConfigurable-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCGallerySearchActionHandler, SCSearchNavigationCoordinator, SCUserSession;
@protocol SCSearchModalPresenting, SCStartChatDelegate;

@interface SCGallerySearchIntentHandler : NSObject <SCSearchIntentHandler, SCSearchModalPresenterConfigurable>
{
    SCGallerySearchActionHandler *_gallerySearchActionHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <SCSearchModalPresenting> _searchModalPresenter;
    id <SCStartChatDelegate> _startChatDelegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_chatWithGroupId:(id)arg1;
- (void)_chatWithUsername:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)handleIntent:(id)arg1;
- (_Bool)handleIntent:(id)arg1 notification:(id)arg2;
- (_Bool)handleIntent:(id)arg1 notification:(id)arg2 notificationDismissed:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
@property(nonatomic) __weak id <SCSearchModalPresenting> searchModalPresenter; // @synthesize searchModalPresenter=_searchModalPresenter;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
