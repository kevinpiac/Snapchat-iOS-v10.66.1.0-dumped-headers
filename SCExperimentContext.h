//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SCExperimentContext : NSObject
{
    _Atomic int _exposureCount;
    NSString *_experimentId;
    NSMutableDictionary *_infoDictionary;
}

- (void).cxx_destruct;
- (_Bool)_boolForParameter:(id)arg1 defaultValue:(_Bool)arg2;
- (double)_doubleForParameter:(id)arg1 defaultValue:(double)arg2;
- (long long)_integerForParameter:(id)arg1 defaultValue:(long long)arg2;
- (id)_stringForParameter:(id)arg1 defaultValue:(id)arg2;
- (id)experimentName;
- (id)infoDictionary;
- (id)init;
- (void)logExposure;
- (void)setupParameters;

@end
