//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSearchActionButtonViewModel, SCSnapchatterAvatarContainerViewModel, SCSnapchatterBadgeViewModel;

@interface SCSnapchatterThumbnailViewModel : NSObject <NSCopying>
{
    SCSnapchatterAvatarContainerViewModel *_avatarContainerViewModel;
    SCSnapchatterBadgeViewModel *_badgeViewModel;
    SCSearchActionButtonViewModel *_sideActionButtonViewModel;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchatterAvatarContainerViewModel *avatarContainerViewModel; // @synthesize avatarContainerViewModel=_avatarContainerViewModel;
@property(readonly, copy, nonatomic) SCSnapchatterBadgeViewModel *badgeViewModel; // @synthesize badgeViewModel=_badgeViewModel;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAvatarContainerViewModel:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 badgeViewModel:(id)arg3 sideActionButtonViewModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *sideActionButtonViewModel; // @synthesize sideActionButtonViewModel=_sideActionButtonViewModel;

@end

