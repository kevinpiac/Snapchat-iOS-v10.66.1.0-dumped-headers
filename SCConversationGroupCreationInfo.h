//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationGroupCreationInfo : NSObject <NSCopying>
{
    BOOL _creationSource;
    NSString *_creatorId;
    double _creationTimestampInEpochSecs;
    NSString *_creationToken;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL creationSource; // @synthesize creationSource=_creationSource;
@property(readonly, nonatomic) double creationTimestampInEpochSecs; // @synthesize creationTimestampInEpochSecs=_creationTimestampInEpochSecs;
@property(readonly, copy, nonatomic) NSString *creationToken; // @synthesize creationToken=_creationToken;
@property(readonly, copy, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
- (unsigned long long)hash;
- (id)initWithCreatorId:(id)arg1 creationTimestampInEpochSecs:(double)arg2 creationSource:(BOOL)arg3 creationToken:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end

