//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCNetworkImage, SCSnapchatterAvatarContainerViewModel;

@interface SCDiscoverFeedManagementIconViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatterAvatarContainerViewModel *_snapchatterAvatarContainerViewModel_model;
    SCNetworkImage *_networkImage_networkImage;
}

+ (id)networkImageWithNetworkImage:(id)arg1;
+ (id)snapchatterAvatarContainerViewModelWithModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSnapchatterAvatarContainerViewModel:(CDUnknownBlockType)arg1 networkImage:(CDUnknownBlockType)arg2;

@end

