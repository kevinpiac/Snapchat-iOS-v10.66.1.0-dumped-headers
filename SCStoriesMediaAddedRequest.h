//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesMediaInfo;

@interface SCStoriesMediaAddedRequest : NSObject <NSCopying>
{
    _Bool _shouldGenerateThumbnails;
    SCStoriesMediaInfo *_mediaInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMediaInfo:(id)arg1 shouldGenerateThumbnails:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCStoriesMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(readonly, nonatomic) _Bool shouldGenerateThumbnails; // @synthesize shouldGenerateThumbnails=_shouldGenerateThumbnails;

@end

