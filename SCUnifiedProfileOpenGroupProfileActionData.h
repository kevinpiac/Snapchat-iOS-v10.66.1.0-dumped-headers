//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCUnifiedProfileOpenGroupProfileActionData : NSObject <NSCopying>
{
    NSString *_groupId;
    NSString *_sourcePageType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (unsigned long long)hash;
- (id)initWithGroupId:(id)arg1 sourcePageType:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;

@end
