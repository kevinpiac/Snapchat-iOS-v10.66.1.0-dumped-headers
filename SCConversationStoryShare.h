//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationStoryShare : NSObject <NSCopying>
{
    BOOL _mediaType;
    _Bool _isUserTagged;
    NSString *_storyId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithStoryId:(id)arg1 mediaType:(BOOL)arg2 isUserTagged:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isUserTagged; // @synthesize isUserTagged=_isUserTagged;
@property(readonly, nonatomic) BOOL mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

@end
