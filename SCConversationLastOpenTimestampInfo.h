//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCConversationLastOpenTimestampInfo : NSObject <NSCopying>
{
    double _chatTimestampInEpochSecs;
    double _snapTimestampInEpochSecs;
}

@property(readonly, nonatomic) double chatTimestampInEpochSecs; // @synthesize chatTimestampInEpochSecs=_chatTimestampInEpochSecs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithChatTimestampInEpochSecs:(double)arg1 snapTimestampInEpochSecs:(double)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double snapTimestampInEpochSecs; // @synthesize snapTimestampInEpochSecs=_snapTimestampInEpochSecs;

@end

