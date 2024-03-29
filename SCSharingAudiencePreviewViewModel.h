//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSharingAudiencePreviewViewModel : NSObject
{
    NSString *_sharingAudienceTitle;
    NSString *_subtitle;
}

+ (id)_localizedFriendsCount:(long long)arg1;
+ (id)_localizedFriendsCount:(long long)arg1 withSpecificFriendName:(id)arg2;
+ (id)audiencePreviewForPreferences:(id)arg1 bySharingWithPeopleIfNeeded:(id)arg2;
- (void).cxx_destruct;
- (id)initWithSharingAudienceTitle:(id)arg1 subtitle:(id)arg2;
@property(readonly, copy, nonatomic) NSString *sharingAudienceTitle; // @synthesize sharingAudienceTitle=_sharingAudienceTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@end

