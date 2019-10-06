//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface SCUnifiedProfileStoriesActionDataModel : NSObject <NSCopying>
{
    long long _storyType;
    NSString *_storyIdentifier;
    NSString *_individualStoryId;
    NSObject<NSCopying> *_dataModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *dataModel; // @synthesize dataModel=_dataModel;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *individualStoryId; // @synthesize individualStoryId=_individualStoryId;
- (id)initWithStoryType:(long long)arg1 storyIdentifier:(id)arg2 individualStoryId:(id)arg3 dataModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;

@end
