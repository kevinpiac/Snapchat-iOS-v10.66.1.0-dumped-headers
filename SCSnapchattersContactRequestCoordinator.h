//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObjectContext, SCLazy, SCPhoneContactsStore, SCSnapchattersContactService, SCTimeProvider;
@protocol SCPerforming;

@interface SCSnapchattersContactRequestCoordinator : NSObject
{
    SCDocObjectContext *_docObjectContext;
    id <SCPerforming> _docObjectPerformer;
    id <SCPerforming> _servicePerformer;
    SCSnapchattersContactService *_contactService;
    SCPhoneContactsStore *_phoneContactsStore;
    SCTimeProvider *_currentDateProvider;
    SCLazy *_userInfoRepository;
    SCLazy *_suggestedSnapchatterSyncRepository;
}

- (void).cxx_destruct;
- (void)_deleteAllContactsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchContactsWithContactRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processDeleteAllContactsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_processExtraMetadataWithSojuFindFriendsResponse:(id)arg1 currentDateProvider:(id)arg2 isDelta:(_Bool)arg3;
- (void)_processFetchContactsWithFindFriendsResponse:(id)arg1 shouldRecommend:(_Bool)arg2 isDelta:(_Bool)arg3 error:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_processUpdatedSyncEnable:(_Bool)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateSyncEnableWithContactRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllContactsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchContactsWithContactRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDocObjectContext:(id)arg1 docObjectPerformer:(id)arg2 servicePerformer:(id)arg3 contactService:(id)arg4 phoneContactsStore:(id)arg5 currentDateProvider:(id)arg6 userInfoRepository:(id)arg7 suggestedSnapchatterSyncRepository:(id)arg8;
- (void)updateSyncEnableWithContactRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

