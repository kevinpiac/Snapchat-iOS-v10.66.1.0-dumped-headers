//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCCBitmojiInfo;

@interface SCCGroupParticipant : SCComposerMarshallableObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    SCCBitmojiInfo *_bitmojiInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCCBitmojiInfo *bitmojiInfo; // @synthesize bitmojiInfo=_bitmojiInfo;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithSCChatGroupParticipant:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiInfo:(id)arg4;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

