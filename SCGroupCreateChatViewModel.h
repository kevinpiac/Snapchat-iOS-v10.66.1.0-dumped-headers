//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMessageChatViewModel.h"

@class NSArray, NSAttributedString, NSMutableArray, SCChatGroupUpdateContent;

@interface SCGroupCreateChatViewModel : SCMessageChatViewModel
{
    NSArray *_groupParticipants;
    NSArray *_groupExParticipants;
    unsigned long long _numberOfBitmojisThatCanFit;
    _Bool _useOverflow;
    _Bool _enableAddToGroupButton;
    unsigned long long _numberOfBitmojisToShow;
    NSMutableArray *_groupUpdateParticipants;
    SCChatGroupUpdateContent *_content;
}

+ (id)_textForLabelType:(long long)arg1 modifiedByDisplay:(id)arg2 modifiedParticipantsDisplay:(id)arg3 selfDisplay:(id)arg4 isSelfModifier:(_Bool)arg5 isSelfModified:(_Bool)arg6 groupName:(id)arg7 numberInOverflow:(unsigned long long)arg8;
- (void).cxx_destruct;
- (id)_getDisplayName:(id)arg1;
- (id)_getDisplayNames:(id)arg1;
- (id)_getParticipantFromUserId:(id)arg1;
- (void)_setUpBitmojis;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTextForLabel;
- (double)bodyContentWidth;
- (double)calculateHeight;
@property(readonly, copy, nonatomic) SCChatGroupUpdateContent *content; // @synthesize content=_content;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) _Bool enableAddToGroupButton;
@property(readonly, copy, nonatomic) NSArray *groupUpdateParticipants;
- (void)imageForMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)needsExtraSpacingOnTop;
@property(readonly, nonatomic) unsigned long long numberOfBitmojisThatCanFit;
@property(readonly, nonatomic) unsigned long long numberOfBitmojisToShow;
- (double)payloadHeight;
- (double)payloadVerticalMargin;
- (id)reusableCellIdentifier;
@property(readonly, nonatomic) _Bool useOverflow;

@end

