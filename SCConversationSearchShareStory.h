//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSearchShareStory : NSObject <NSCopying>
{
    NSString *_dynamicStoryId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *dynamicStoryId; // @synthesize dynamicStoryId=_dynamicStoryId;
- (unsigned long long)hash;
- (id)initWithDynamicStoryId:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
