//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData;

@interface SCImpalaPublicProfileState : SCComposerMarshallableObject
{
    _Bool _subscribed;
    _Bool _optInNotifications;
    _Bool _optInNotificationsAllowed;
    NSData *_encodedBusinessProfileAndUserData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *encodedBusinessProfileAndUserData; // @synthesize encodedBusinessProfileAndUserData=_encodedBusinessProfileAndUserData;
- (id)initWithEncodedBusinessProfileAndUserData:(id)arg1 subscribed:(_Bool)arg2 optInNotifications:(_Bool)arg3 optInNotificationsAllowed:(_Bool)arg4;
@property(nonatomic) _Bool optInNotifications; // @synthesize optInNotifications=_optInNotifications;
@property(nonatomic) _Bool optInNotificationsAllowed; // @synthesize optInNotificationsAllowed=_optInNotificationsAllowed;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;

@end

