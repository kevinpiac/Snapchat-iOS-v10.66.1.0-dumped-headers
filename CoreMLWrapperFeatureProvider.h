//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface CoreMLWrapperFeatureProvider : NSObject <MLFeatureProvider>
{
    NSMutableDictionary *_multiArrayDictionary;
    NSSet *_featureNames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *featureNames; // @synthesize featureNames=_featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithFeatureNames:(id)arg1;
- (id)initWithMultiArrayDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *multiArrayDictionary; // @synthesize multiArrayDictionary=_multiArrayDictionary;

@end

