//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapIdentifier : NSObject <NSCopying>
{
    NSString *_storyId;
    NSString *_clientId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithStoryId:(id)arg1 clientId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

@end

