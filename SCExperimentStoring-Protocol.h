//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCZeroDependencyExperimentsProvider-Protocol.h"

@class NSDictionary, NSString;

@protocol SCExperimentStoring <SCZeroDependencyExperimentsProvider>
- (_Bool)boolForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(_Bool)arg3;
- (void)clear;
- (double)doubleForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(double)arg3;
- (NSString *)experimentIdForStudy:(NSString *)arg1;
- (float)floatForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(float)arg3;
- (NSDictionary *)getAllSettingsForStudy:(NSString *)arg1;
- (NSDictionary *)getStudySettings;
- (NSString *)getStudySettingsJsonWithPrettyPrinted:(_Bool)arg1;
- (long long)integerForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(long long)arg3;
- (void)logStudyTriggeredEvent:(NSString *)arg1 experimentId:(NSString *)arg2 source:(long long)arg3;
- (_Bool)saveState;
- (void)setStudySettingsFromDictionary:(NSDictionary *)arg1 synchronously:(_Bool)arg2;
- (NSString *)stringForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(NSString *)arg3;
- (unsigned long long)uIntegerForStudy:(NSString *)arg1 forVariable:(NSString *)arg2 defaultValue:(unsigned long long)arg3;
@end

