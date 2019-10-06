//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAProfileUserFriending : SCAUserTrackedEvent
{
    NSNumber *hasDisplayName;
    NSNumber *withDisplayPic;
    long long method;
    long long action;
    long long pageName;
    long long addSource;
    long long storyType;
    NSString *page;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (long long)getAddSource;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasDisplayName;
- (long long)getMethod;
- (id)getPage;
- (long long)getPageName;
- (double)getPerUserSamplingRate;
- (long long)getStoryType;
- (_Bool)getWithDisplayPic;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setAddSource:(long long)arg1;
- (void)setHasDisplayName:(_Bool)arg1;
- (void)setMethod:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setPageName:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setWithDisplayPic:(_Bool)arg1;

@end

