//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerViewController.h"

#import "SCGroupInviteCreationContext-Protocol.h"

@class NSArray, NSString, SCGroupInvite;
@protocol SCGroupInviteStickerEditorViewControllerDelegate;

@interface SCGroupInviteStickerEditorViewController : SCComposerViewController <SCGroupInviteCreationContext>
{
    SCGroupInvite *_inviteToInsert;
    NSArray *_availableExistingInvitesToInsert;
    id <SCGroupInviteStickerEditorViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCGroupInviteStickerEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCancelInviteCreation;
- (void)didSelectInviteWithInvite:(id)arg1;
- (void)fetchExistingInvitesThatCanBeSelectedWithCallback:(CDUnknownBlockType)arg1;
- (id)getApplication;
- (id)initWithCurrentInvite:(id)arg1 availableExistingInvitesToInsert:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (_Bool)shadowEnabled;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

