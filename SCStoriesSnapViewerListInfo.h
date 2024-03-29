//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCStoriesSnapViewCountInfo;

@interface SCStoriesSnapViewerListInfo : NSObject <NSCopying>
{
    NSArray *_friendViewerList;
    NSArray *_otherViewerList;
    SCStoriesSnapViewCountInfo *_viewCount;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *friendViewerList; // @synthesize friendViewerList=_friendViewerList;
- (unsigned long long)hash;
- (id)initWithFriendViewerList:(id)arg1 otherViewerList:(id)arg2 viewCount:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *otherViewerList; // @synthesize otherViewerList=_otherViewerList;
@property(readonly, copy, nonatomic) SCStoriesSnapViewCountInfo *viewCount; // @synthesize viewCount=_viewCount;

@end

