//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAGameSnippetEventBase.h"

@class NSNumber;

@interface SCAGameSnippetSent : SCAGameSnippetEventBase
{
    NSNumber *success;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (_Bool)getSuccess;
- (void)setSuccess:(_Bool)arg1;

@end
