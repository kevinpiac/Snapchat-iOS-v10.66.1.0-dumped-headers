//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface SCHovaTabBarLogger : NSObject
{
    NSDictionary *_pageMap;
    NSSet *_pageMapKeys;
    NSSet *_pageMapValues;
    NSString *_pageViewLogFrom;
    NSString *_pageViewLogTo;
    _Bool _shouldCoalescePageView;
    _Bool _wasCameraHeaderTapped;
    NSString *_fromPageNormalized;
    NSString *_tapPage;
    NSString *_longPressPage;
}

+ (id)shared;
+ (_Bool)shouldLog;
- (void).cxx_destruct;
- (id)_normalizedTabBarPageNameFrom:(id)arg1;
- (void)_resetActions;
- (void)_sampleLogEvent:(id)arg1 parameters:(id)arg2;
- (void)didLongPresssFrom:(id)arg1;
- (void)didTapCameraHeader;
- (void)didTapFrom:(id)arg1;
@property(readonly, nonatomic) NSString *fromPageNormalized; // @synthesize fromPageNormalized=_fromPageNormalized;
- (id)init;
- (void)logPageView:(id)arg1 from:(id)arg2 method:(id)arg3;
- (void)logRecording;
@property(readonly, nonatomic) NSString *longPressPage; // @synthesize longPressPage=_longPressPage;
- (void)pageViewChanged:(id)arg1;
@property(readonly, nonatomic) NSString *tapPage; // @synthesize tapPage=_tapPage;
@property(readonly, nonatomic) _Bool wasCameraHeaderTapped; // @synthesize wasCameraHeaderTapped=_wasCameraHeaderTapped;

@end
