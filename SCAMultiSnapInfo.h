//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCAMultiSnapInfo : NSObject <NamedEvent, NSCopying>
{
    NSNumber *multiSnapPreviewCount;
    NSNumber *multiSnapPreviewIndex;
    NSNumber *multiSnapOutputCount;
    NSNumber *multiSnapOutputIndex;
    NSNumber *trimmed;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMultiSnapOutputCount;
- (long long)getMultiSnapOutputIndex;
- (long long)getMultiSnapPreviewCount;
- (long long)getMultiSnapPreviewIndex;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (_Bool)getTrimmed;
- (void)setMultiSnapOutputCount:(long long)arg1;
- (void)setMultiSnapOutputIndex:(long long)arg1;
- (void)setMultiSnapPreviewCount:(long long)arg1;
- (void)setMultiSnapPreviewIndex:(long long)arg1;
- (void)setTrimmed:(_Bool)arg1;

@end

