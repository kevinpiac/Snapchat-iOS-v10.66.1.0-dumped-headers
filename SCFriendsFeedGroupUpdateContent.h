//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCFriendsFeedGroupUpdateContent : NSObject <NSCopying>
{
    NSArray *_modifiedParticipants;
    long long _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithModifiedParticipants:(id)arg1 type:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *modifiedParticipants; // @synthesize modifiedParticipants=_modifiedParticipants;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end
