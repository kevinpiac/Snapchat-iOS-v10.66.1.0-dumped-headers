//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCSearchV2RecentChatInteraction : SCComposerMarshallableObject
{
    long long _type;
    NSString *_objId;
    double _timestamp;
}

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 objId:(id)arg2 timestamp:(double)arg3;
@property(copy, nonatomic) NSString *objId; // @synthesize objId=_objId;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long type; // @synthesize type=_type;

@end
