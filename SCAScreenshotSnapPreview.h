//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCADirectSnapPreviewBase.h"

@class NSString;

@interface SCAScreenshotSnapPreview : SCADirectSnapPreviewBase
{
    NSString *page;
    NSString *snapSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getPage;
- (double)getPerUserSamplingRate;
- (id)getSnapSessionId;
- (void)setPage:(id)arg1;
- (void)setSnapSessionId:(id)arg1;

@end
