//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPinnedConversation : SCDocObject <NSCopying>
{
    NSString *_identifier;
    double _pinnedTimestampInEpochSecs;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 pinnedTimestampInEpochSecs:(double)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double pinnedTimestampInEpochSecs; // @synthesize pinnedTimestampInEpochSecs=_pinnedTimestampInEpochSecs;

@end

