//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADirectSnapSendBase.h"

@class NSString;

@interface SCAScreenshotSnapSend : SCADirectSnapSendBase
{
    NSString *page;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *snapSessionId;
    NSString *storySessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (id)getLensOptionId;
- (id)getPage;
- (double)getPerUserSamplingRate;
- (id)getSnapSessionId;
- (id)getStorySessionId;
- (void)setFilterLensId:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStorySessionId:(id)arg1;

@end

