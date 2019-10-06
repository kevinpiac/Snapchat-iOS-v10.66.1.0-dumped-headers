//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCChatLocationShareMessage : NSObject
{
    NSString *_senderUserId;
    NSString *_recipientUserId;
    NSString *_groupId;
    unsigned long long _userResponse;
    struct CLLocationCoordinate2D _embeddedLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D embeddedLocation; // @synthesize embeddedLocation=_embeddedLocation;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithJson:(id)arg1;
- (id)initWithSenderUserId:(id)arg1 recipientUserId:(id)arg2 groupId:(id)arg3 embeddedLocation:(struct CLLocationCoordinate2D)arg4 userResponse:(unsigned long long)arg5;
@property(readonly, copy, nonatomic) NSString *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(readonly, copy, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
- (id)serializedAsJson;
@property(readonly, nonatomic) unsigned long long userResponse; // @synthesize userResponse=_userResponse;

@end
