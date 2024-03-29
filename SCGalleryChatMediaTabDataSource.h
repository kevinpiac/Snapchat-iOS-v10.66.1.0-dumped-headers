//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCProfileChatMediaDataStore, SCQueuePerformer, SCScopedAccess, SCUserSession;
@protocol SCGalleryChatMediaTabDataSourceDelegate;

@interface SCGalleryChatMediaTabDataSource : NSObject <SCDataCoordinatorListener, SCUpdateListener>
{
    SCUserSession *_userSession;
    SCScopedAccess *_friendsFeedDataAccess;
    SCProfileChatMediaDataStore *_chatMediaDataStore;
    NSMutableDictionary *_allViewModels;
    NSArray *_displayedViewModels;
    SCQueuePerformer *_performer;
    NSObject<SCGalleryChatMediaTabDataSourceDelegate> *_delegate;
}

- (void).cxx_destruct;
- (void)_update;
- (id)_viewModelForFeedItem:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak NSObject<SCGalleryChatMediaTabDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)setDisplayedViewModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

