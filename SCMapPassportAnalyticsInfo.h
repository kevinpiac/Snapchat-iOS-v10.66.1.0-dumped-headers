//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCMapPassportAnalyticsInfo : SCComposerMarshallableObject
{
    _Bool _finishedInitialLoad;
    double _mapSessionId;
    NSString *_sourceType;
    NSString *_mapSourceType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishedInitialLoad; // @synthesize finishedInitialLoad=_finishedInitialLoad;
- (id)initWithMapSessionId:(double)arg1 sourceType:(id)arg2 mapSourceType:(id)arg3 finishedInitialLoad:(_Bool)arg4;
@property(nonatomic) double mapSessionId; // @synthesize mapSessionId=_mapSessionId;
@property(copy, nonatomic) NSString *mapSourceType; // @synthesize mapSourceType=_mapSourceType;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;

@end

