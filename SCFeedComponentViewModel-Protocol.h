//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCAvatarContainerViewModel, SCCornerRadii, SCFriendsFeedComponentViewRightButtonViewModel, SCFriendsFeedFriendmojiViewModel, SCFriendsFeedIcon, UIFont;

@protocol SCFeedComponentViewModel <NSObject>
- (SCActionModel *)animationModel;
- (NSAttributedString *)attributedSublabelText;
- (SCCornerRadii *)cornerRadii;
- (NSAttributedString *)displayNameAttributedStringWithWidth:(double)arg1;
- (SCFriendsFeedIcon *)feedIcon;
- (SCFriendsFeedFriendmojiViewModel *)friendmojiViewModel;
- (SCAvatarContainerViewModel *)friendsFeedAvatarViewModel;
- (NSString *)identifier;
- (_Bool)isPinned;
- (SCFriendsFeedComponentViewRightButtonViewModel *)rightButtonViewModel;
- (UIFont *)separatorFont;
- (_Bool)showOfficialBadge;
- (SCFriendsFeedFriendmojiViewModel *)sublabelFriendmojiViewModel;
- (NSString *)substringToTruncateInSubLabel;
- (unsigned long long)typingAnimationState;
@end

