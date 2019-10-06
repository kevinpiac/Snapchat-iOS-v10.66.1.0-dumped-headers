//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TCV3ConversationCtx : NSObject
{
    int _usersWithBitmojiCount;
    NSString *_scopeId;
    NSString *_mac;
    NSString *_token;
    NSDictionary *_usernameToUserId;
}

+ (id)ConversationCtxWithScopeId:(id)arg1 mac:(id)arg2 token:(id)arg3 usernameToUserId:(id)arg4 usersWithBitmojiCount:(int)arg5;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScopeId:(id)arg1 mac:(id)arg2 token:(id)arg3 usernameToUserId:(id)arg4 usersWithBitmojiCount:(int)arg5;
@property(readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSDictionary *usernameToUserId; // @synthesize usernameToUserId=_usernameToUserId;
@property(readonly, nonatomic) int usersWithBitmojiCount; // @synthesize usersWithBitmojiCount=_usersWithBitmojiCount;

@end
