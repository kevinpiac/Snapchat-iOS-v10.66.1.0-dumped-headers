//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface SCAddFriendsProgressAvatarViewModel : NSObject <NSCopying>
{
    _Bool _isBitmoji;
    NSString *_userId;
    UIImage *_avatar;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 avatar:(id)arg2 isBitmoji:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isBitmoji; // @synthesize isBitmoji=_isBitmoji;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

