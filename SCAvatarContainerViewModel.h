//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCAvatarAccessoryIcon, SCAvatarViewModel;

@interface SCAvatarContainerViewModel : NSObject <NSCopying>
{
    SCAvatarViewModel *_avatarViewModel;
    SCAvatarAccessoryIcon *_accessoryIcon;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAvatarAccessoryIcon *accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAvatarViewModel:(id)arg1 accessoryIcon:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
