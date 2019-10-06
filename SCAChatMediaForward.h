//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAChatMediaForward : SCAUserTrackedEvent
{
    NSNumber *byOriginalSender;
    NSNumber *numGroupRecipients;
    NSNumber *numFriendRecipients;
    NSNumber *numStoryRecipients;
    NSNumber *toMyStory;
    NSNumber *toOriginalConversation;
    NSNumber *originalSentTsMs;
    long long fromSourceType;
    long long messageType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getByOriginalSender;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFromSourceType;
- (long long)getMessageType;
- (long long)getNumFriendRecipients;
- (long long)getNumGroupRecipients;
- (long long)getNumStoryRecipients;
- (long long)getOriginalSentTsMs;
- (double)getPerUserSamplingRate;
- (_Bool)getToMyStory;
- (_Bool)getToOriginalConversation;
- (id)init;
- (void)setByOriginalSender:(_Bool)arg1;
- (void)setFromSourceType:(long long)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setNumFriendRecipients:(long long)arg1;
- (void)setNumGroupRecipients:(long long)arg1;
- (void)setNumStoryRecipients:(long long)arg1;
- (void)setOriginalSentTsMs:(long long)arg1;
- (void)setToMyStory:(_Bool)arg1;
- (void)setToOriginalConversation:(_Bool)arg1;

@end

