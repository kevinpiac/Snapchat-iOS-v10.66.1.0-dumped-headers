//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray;

@interface SCGroupInviteJoinedChatMessageContentViewModel : SCComposerMarshallableObject
{
    NSArray *_joinedPersonDisplayNames;
    NSArray *_joinedPersonAvatarIds;
}

- (void).cxx_destruct;
- (id)initWithJoinedPersonDisplayNames:(id)arg1 joinedPersonAvatarIds:(id)arg2;
@property(copy, nonatomic) NSArray *joinedPersonAvatarIds; // @synthesize joinedPersonAvatarIds=_joinedPersonAvatarIds;
@property(copy, nonatomic) NSArray *joinedPersonDisplayNames; // @synthesize joinedPersonDisplayNames=_joinedPersonDisplayNames;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

