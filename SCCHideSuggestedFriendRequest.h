//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCCHideSuggestedFriendRequest : SCComposerMarshallableObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_suggestionToken;
}

- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 username:(id)arg2 suggestionToken:(id)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

