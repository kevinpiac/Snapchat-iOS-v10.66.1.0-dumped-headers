//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSSet;

@interface CoreMLWrapper : NSObject
{
    NSSet *_outputNameSet;
    MLModel *_model;
}

+ (void)compileModelAtPath:(id)arg1 toPath:(id)arg2;
- (void).cxx_destruct;
- (id)_loadModelWithContentsOfURL:(id)arg1 hardware:(long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 outputNameSet:(id)arg2 hardware:(long long)arg3 error:(id *)arg4;
- (id)initWithModelFilePath:(id)arg1 outputNameSet:(id)arg2 hardware:(long long)arg3 error:(id *)arg4;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSSet *outputNameSet; // @synthesize outputNameSet=_outputNameSet;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromTensorDictionary:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

