//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCConversationBatchMedias;

@interface SCConversationSpeedwayStory : NSObject <NSCopying>
{
    BOOL _speedwayStoryV2Source;
    NSString *_title;
    SCConversationBatchMedias *_batchMedias;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCConversationBatchMedias *batchMedias; // @synthesize batchMedias=_batchMedias;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 batchMedias:(id)arg2 speedwayStoryV2Source:(BOOL)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL speedwayStoryV2Source; // @synthesize speedwayStoryV2Source=_speedwayStoryV2Source;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

