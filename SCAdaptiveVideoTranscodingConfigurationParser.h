//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCircumstanceEngine;

@interface SCAdaptiveVideoTranscodingConfigurationParser : NSObject
{
    SCCircumstanceEngine *_circumstanceEngine;
}

- (void).cxx_destruct;
- (id)_createDefaultConfigurationForMediaQualityLevel:(long long)arg1;
@property(retain, nonatomic) SCCircumstanceEngine *circumstanceEngine; // @synthesize circumstanceEngine=_circumstanceEngine;
- (id)configurationForMediaQualityLevel:(long long)arg1;
- (id)levelToConfigurationKeyMap;
- (id)levelToDefaultConfigurationMap;

@end

