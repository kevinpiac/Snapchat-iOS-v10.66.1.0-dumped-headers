//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationDataController-Protocol.h"

@class CLLocation, NSDate, NSString, SCWeather;
@protocol SCLocationDataControllerDelegate;

@interface SCLocationWeatherController : NSObject <SCLocationDataController>
{
    SCWeather *_cachedWeather;
    CLLocation *_lastUpdatedLocation;
    NSDate *_lastUpdatedTimestamp;
    id <SCLocationDataControllerDelegate> delegate;
}

- (void).cxx_destruct;
- (void)clearCache;
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate; // @synthesize delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)updateCacheWithLocation:(id)arg1 newSession:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

