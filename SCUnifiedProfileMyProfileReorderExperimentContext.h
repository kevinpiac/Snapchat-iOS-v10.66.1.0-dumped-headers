//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCUnifiedProfileMyProfileReorderExperimentContext : SCExperimentContext
{
    _Bool _enableFriendsSectionAboveBitmoji;
    _Bool _enableAddFriendsMergeWithFriendsSection;
}

@property(readonly, nonatomic) _Bool enableAddFriendsMergeWithFriendsSection; // @synthesize enableAddFriendsMergeWithFriendsSection=_enableAddFriendsMergeWithFriendsSection;
@property(readonly, nonatomic) _Bool enableFriendsSectionAboveBitmoji; // @synthesize enableFriendsSectionAboveBitmoji=_enableFriendsSectionAboveBitmoji;
- (id)experimentName;
- (void)setupParameters;

@end

