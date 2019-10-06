//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceBitmojiUserModel : NSObject <NSCopying>
{
    _Bool _isPlaceholder;
    NSString *_userId;
    NSString *_displayName;
    NSString *_avatarId;
    NSString *_selfieId;
}

+ (id)placeholderUserModelFromBitmojiInfo:(id)arg1;
+ (id)userModelForCurrentUser;
+ (id)userModelFromSnapchatter:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 displayName:(id)arg2 avatarId:(id)arg3 selfieId:(id)arg4 isPlaceholder:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

