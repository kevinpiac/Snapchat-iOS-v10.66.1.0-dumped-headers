//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSnapchattersBitmojiInfo;

@interface SCSnapchattersSnapchatterBasicSummary : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    SCSnapchattersBitmojiInfo *_bitmojiInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchattersBitmojiInfo *bitmojiInfo; // @synthesize bitmojiInfo=_bitmojiInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiInfo:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
