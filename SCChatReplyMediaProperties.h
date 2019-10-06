//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLazy, SCLensSbSnappableMessage;

@interface SCChatReplyMediaProperties : NSObject
{
    _Bool _isInfiniteDuration;
    NSString *_storyId;
    NSString *_storyKey;
    NSString *_storyIv;
    long long _mediaType;
    NSString *_sourceId;
    SCLazy *_thumbnailData;
    SCLensSbSnappableMessage *_lensMetadata;
}

- (void).cxx_destruct;
- (id)initWithStoryId:(id)arg1 storyKey:(id)arg2 storyIv:(id)arg3 mediaType:(long long)arg4 sourceId:(id)arg5 isInfiniteDuration:(_Bool)arg6 thumbnailData:(id)arg7 lensMetadata:(id)arg8;
@property(readonly, nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(readonly, nonatomic) SCLensSbSnappableMessage *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) NSString *storyIv; // @synthesize storyIv=_storyIv;
@property(readonly, nonatomic) NSString *storyKey; // @synthesize storyKey=_storyKey;
@property(readonly, nonatomic) SCLazy *thumbnailData; // @synthesize thumbnailData=_thumbnailData;

@end
