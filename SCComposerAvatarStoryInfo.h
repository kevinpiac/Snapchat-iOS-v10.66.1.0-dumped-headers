//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesThumbnailInfo;

@interface SCComposerAvatarStoryInfo : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    _Bool _hasUnviewedSnaps;
    SCStoriesThumbnailInfo *_thumbnail;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasUnviewedSnaps; // @synthesize hasUnviewedSnaps=_hasUnviewedSnaps;
- (unsigned long long)hash;
- (id)initWithThumbnail:(id)arg1 isStoryMuted:(_Bool)arg2 hasUnviewedSnaps:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *thumbnail; // @synthesize thumbnail=_thumbnail;

@end
