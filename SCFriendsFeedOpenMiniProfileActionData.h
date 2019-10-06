//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, NSString, SCFriendsFeedOpenCameraActionData, SCSnapchatter;

@interface SCFriendsFeedOpenMiniProfileActionData : NSObject <NSCopying>
{
    _Bool _isGroupChat;
    NSString *_feedId;
    SCFriendsFeedOpenCameraActionData *_openCameraActionData;
    SCSnapchatter *_snapchatter;
    long long _addSourceType;
    long long _pageType;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long addSourceType; // @synthesize addSourceType=_addSourceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithFeedId:(id)arg1 isGroupChat:(_Bool)arg2 openCameraActionData:(id)arg3 snapchatter:(id)arg4 addSourceType:(long long)arg5 pageType:(long long)arg6 indexPath:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(readonly, copy, nonatomic) SCFriendsFeedOpenCameraActionData *openCameraActionData; // @synthesize openCameraActionData=_openCameraActionData;
@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;

@end

