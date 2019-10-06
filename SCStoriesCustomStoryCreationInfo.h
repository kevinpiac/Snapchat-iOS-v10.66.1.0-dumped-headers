//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesCustomStoryCreationInfo : NSObject <NSCopying>
{
    NSString *_creatorUserId;
    NSString *_creatorUsername;
    NSString *_creatorDisplayName;
    double _creationTimestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, copy, nonatomic) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;
@property(readonly, copy, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
@property(readonly, copy, nonatomic) NSString *creatorUsername; // @synthesize creatorUsername=_creatorUsername;
- (unsigned long long)hash;
- (id)initWithCreatorUserId:(id)arg1 creatorUsername:(id)arg2 creatorDisplayName:(id)arg3 creationTimestamp:(double)arg4;
- (_Bool)isEqual:(id)arg1;

@end
