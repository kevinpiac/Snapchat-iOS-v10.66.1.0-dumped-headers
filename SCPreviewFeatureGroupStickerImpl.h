//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCGroupInviteEditorViewControllerDelegate-Protocol.h"
#import "SCGroupInviteStickerEditorViewControllerDelegate-Protocol.h"
#import "SCPreviewFeatureGroupSticker-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer, SCUserSession;
@protocol SCPreviewFeatureParentViewControllerAccessing, SCPreviewFeatureStickerContainer, SCPreviewLogging;

@interface SCPreviewFeatureGroupStickerImpl : SCFeature <SCGroupInviteEditorViewControllerDelegate, SCPreviewGestureResponder, SCGroupInviteStickerEditorViewControllerDelegate, SCPreviewFeatureGroupSticker>
{
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    id <SCPreviewLogging> _previewLogger;
    SCUserSession *_userSession;
    SCLazy *_groupsDataFetching;
    CDUnknownBlockType _inviteEditingCompletion;
    _Bool _stickerEditingEnabled;
    SCQueuePerformer *_performer;
    id <SCPreviewFeatureParentViewControllerAccessing> _delegate;
}

- (void).cxx_destruct;
- (void)_editExistingSticker;
- (void)_editGroupSticker:(id)arg1 previewStickerView:(id)arg2;
- (id)_groupStickersOnSnap;
- (void)_presentGroupStickerEditorWithStyle:(long long)arg1 existingStickerOrNil:(id)arg2 inviteEditingCompletion:(CDUnknownBlockType)arg3;
- (void)createGroupInviteForRecipientUsernames:(id)arg1 recipientGroupIds:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)disableExistingGroupStickerEditing;
- (void)groupInviteStickerEditorViewController:(id)arg1 didSelectInviteWithDetails:(id)arg2;
- (void)groupInviteStickerEditorViewControllerDidDismissWithoutSelectingInvite:(id)arg1;
- (void)groupStickerEditor:(id)arg1 wantsToInsertStickerForInvite:(id)arg2 isNewlyCreated:(_Bool)arg3;
- (_Bool)hasGroupInviteStickersOnSnap;
- (id)initWithStickerContainer:(id)arg1 userSession:(id)arg2 previewLogger:(id)arg3 groupsDataFetching:(id)arg4;
- (void)insertEventStickerWithStyle:(long long)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3 isFromRecents:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

