//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCGallerySavedTabDataSourceDelegate-Protocol.h"
#import "SCSavingSnapChatCardViewDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SCChatSDKActionContext, SCGallerySavedTabDataSource, SCQueuePerformer;
@protocol SCCachingMediaRequest, SCSavingSnapsGetUpdatedDelegate;

@interface SCBasicSavedSnapMessageRenderer : NSObject <SCGallerySavedTabDataSourceDelegate, SCChatMessageRenderer, SCSavingSnapChatCardViewDelegate>
{
    SCQueuePerformer *_performer;
    id <SCCachingMediaRequest> _cachingMediaRequest;
    NSString *_entryExternalId;
    NSSet *_snapExternalIds;
    id <SCSavingSnapsGetUpdatedDelegate> _delegate;
    SCGallerySavedTabDataSource *_dataSource;
    _Bool _dataLoaded;
    _Bool _deferredPresent;
    NSArray *_sharedFolderViewModels;
    SCChatSDKActionContext *_actionContext;
}

- (void).cxx_destruct;
- (void)_checkSharedSnapsUpdate:(id)arg1;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)directToSharedFolder;
- (void)fetchChatCardMediaForSavingSnap:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithSharedEntryExternalId:(id)arg1 snapExternalIds:(id)arg2;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)savedTabDataSourceDidReceiveData:(id)arg1 viewModels:(id)arg2 allEntries:(id)arg3;
- (void)setupContentView:(id)arg1;
- (void)setupDataSourceListenerAndDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (id)userSession;
- (void)willDisplayContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

