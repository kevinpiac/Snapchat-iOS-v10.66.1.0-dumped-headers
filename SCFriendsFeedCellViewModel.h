//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCFeedComponentViewModel-Protocol.h"

@class NSString, SCFriendsFeedComponentViewModel;

@interface SCFriendsFeedCellViewModel : NSObject <SCFeedComponentViewModel, IGListDiffable, NSCopying>
{
    NSString *_identifier;
    SCFriendsFeedComponentViewModel *_feedComponentViewModel;
}

- (void).cxx_destruct;
- (id)animationModel;
- (id)attributedSublabelText;
- (id)avatarTapActionModel;
- (id)buttonTapActionModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cornerRadii;
- (id)diffIdentifier;
- (id)displayNameAttributedStringWithWidth:(double)arg1;
- (id)doubleTapActionModel;
@property(readonly, copy, nonatomic) SCFriendsFeedComponentViewModel *feedComponentViewModel; // @synthesize feedComponentViewModel=_feedComponentViewModel;
- (id)feedIcon;
- (id)friendmojiViewModel;
- (id)friendsFeedAvatarViewModel;
- (_Bool)hasUnreadMessages;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 feedComponentViewModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)isGroupConversation;
- (_Bool)isPinned;
- (id)longPressActionModel;
- (id)nameToCompare;
- (id)reusableCellIdentifier;
- (id)rightButtonViewModel;
- (id)separatorFont;
- (_Bool)shouldAllowTapToRetryOnCell;
- (_Bool)shouldDisableFeedSwiping;
- (_Bool)showOfficialBadge;
- (id)sublabelFriendmojiViewModel;
- (id)substringToTruncateInSubLabel;
- (id)tapActionModel;
- (unsigned long long)typingAnimationState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
