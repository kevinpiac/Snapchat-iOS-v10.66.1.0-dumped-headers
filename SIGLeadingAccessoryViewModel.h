//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SIGAvatarViewModel;

@interface SIGLeadingAccessoryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SIGAvatarViewModel *_avatar_avatarViewModel;
}

+ (id)avatarWithAvatarViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchAvatar:(CDUnknownBlockType)arg1;

@end
