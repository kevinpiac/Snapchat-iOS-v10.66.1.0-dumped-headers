//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString;

@interface SCSearchChatFriendIntent : NSObject <SCSearchIntent>
{
    NSString *_username;
}

- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
