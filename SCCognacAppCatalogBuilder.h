//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCCognacAppCatalogBuilder : NSObject
{
    NSArray *_targetedAppArray;
    NSDictionary *_targetedAppDict;
    NSDictionary *_temporaryAppDict;
    NSDictionary *_allAvailableAppDict;
}

+ (id)cognacAppCatalog;
+ (id)cognacAppCatalogFromExistingCognacAppCatalog:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withAllAvailableAppDict:(id)arg1;
- (id)withTargetedAppArray:(id)arg1;
- (id)withTargetedAppDict:(id)arg1;
- (id)withTemporaryAppDict:(id)arg1;

@end

