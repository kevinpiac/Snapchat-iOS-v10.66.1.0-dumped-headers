//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCUserSession;

@interface SCHermosaPrototype : NSObject
{
    SCUserSession *_userSession;
    NSArray *_users;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isUserOnPager:(id)arg1;
- (void)loadUsers;
- (void)sendPagerNotification:(id)arg1 subTitle:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)updateRecords;

@end

