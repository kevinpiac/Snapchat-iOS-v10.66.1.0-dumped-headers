//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatterAccessoryViewModel, SCSnapchatterInfoViewModel, SCSnapchatterThumbnailViewModel;

@interface SCSnapchatterViewModel : NSObject <NSCopying>
{
    SCSnapchatterThumbnailViewModel *_thumbnailViewModel;
    SCSnapchatterInfoViewModel *_infoViewModel;
    SCSnapchatterAccessoryViewModel *_accessoryViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchatterAccessoryViewModel *accessoryViewModel; // @synthesize accessoryViewModel=_accessoryViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCSnapchatterInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
- (id)initWithThumbnailViewModel:(id)arg1 infoViewModel:(id)arg2 accessoryViewModel:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatterThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;

@end

