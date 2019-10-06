//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatter;

@interface SCSnapchattersSuggestDataRequestHide : NSObject <NSCopying>
{
    SCSnapchatter *_suggestedSnapchatter;
    long long _placement;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSuggestedSnapchatter:(id)arg1 placement:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, copy, nonatomic) SCSnapchatter *suggestedSnapchatter; // @synthesize suggestedSnapchatter=_suggestedSnapchatter;

@end

