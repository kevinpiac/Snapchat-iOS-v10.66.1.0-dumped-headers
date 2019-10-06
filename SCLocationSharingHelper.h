//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLocationSharingHelper : NSObject
{
}

+ (_Bool)_areAllFriendsInGroup:(id)arg1 eligibleForSharingWithCurrentUserId:(id)arg2 mapPeopleFriendsProvider:(id)arg3;
+ (_Bool)_isPersonWithUserId:(id)arg1 eligibleForSharingType:(unsigned long long)arg2 currentUserId:(id)arg3 mapPeopleFriendsProvider:(id)arg4;
+ (_Bool)isPersonWithUserId:(id)arg1 eligibleToRequestLocationFromCurrentUserId:(id)arg2 mapPeopleFriendsProvider:(id)arg3;
+ (unsigned long long)locationSharingStatusForGroup:(id)arg1 currentUserId:(id)arg2 locationSharingPreferences:(id)arg3 mapPeopleFriendsProvider:(id)arg4 mapUserPreferences:(id)arg5;
+ (unsigned long long)locationSharingStatusForPersonWithUserId:(id)arg1 asMemberInGroup:(_Bool)arg2 currentUserId:(id)arg3 locationSharingPreferences:(id)arg4 mapPeopleFriendsProvider:(id)arg5 mapUserPreferences:(id)arg6;

@end

