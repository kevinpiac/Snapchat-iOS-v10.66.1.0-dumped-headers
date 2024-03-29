//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSnapchattersGroupSummary : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    NSString *_groupDisplayName;
    NSArray *_participants;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupDisplayName; // @synthesize groupDisplayName=_groupDisplayName;
- (unsigned long long)hash;
- (id)initWithGroupDisplayName:(id)arg1 isStoryMuted:(_Bool)arg2 participants:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;

@end

