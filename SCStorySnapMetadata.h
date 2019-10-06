//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStorySnapMetadata-Protocol.h"

@class NSString;

@interface SCStorySnapMetadata : NSObject <SCStorySnapMetadata>
{
    _Bool _isExpired;
    long long _viewableStatus;
    long long _storyType;
    NSString *_storySnapId;
    NSString *_publisherId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsExpired:(_Bool)arg1 viewableStatus:(long long)arg2 storyType:(long long)arg3 storySnapId:(id)arg4 publisherId:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
- (_Bool)isFriendStory;
- (_Bool)isLiveStory;
- (_Bool)isNotViewable;
- (_Bool)isPotentiallyViewableMobStory;
- (_Bool)isViewableMobStory;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) long long viewableStatus; // @synthesize viewableStatus=_viewableStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

