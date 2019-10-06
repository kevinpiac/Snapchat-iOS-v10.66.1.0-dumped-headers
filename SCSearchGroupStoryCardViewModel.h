//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCSearchGroupStoryCardViewModel : NSObject <NSCopying>
{
    NSString *_mischiefId;
    NSString *_publicationId;
    NSString *_storyName;
    NSString *_storyTypeName;
    NSString *_storyTypeIconName;
    SCActionModel *_longPressActionModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMischiefId:(id)arg1 publicationId:(id)arg2 storyName:(id)arg3 storyTypeName:(id)arg4 storyTypeIconName:(id)arg5 longPressActionModel:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(readonly, copy, nonatomic) NSString *storyName; // @synthesize storyName=_storyName;
@property(readonly, copy, nonatomic) NSString *storyTypeIconName; // @synthesize storyTypeIconName=_storyTypeIconName;
@property(readonly, copy, nonatomic) NSString *storyTypeName; // @synthesize storyTypeName=_storyTypeName;

@end
