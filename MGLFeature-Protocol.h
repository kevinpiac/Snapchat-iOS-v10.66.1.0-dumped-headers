//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLAnnotation-Protocol.h"

@class NSDictionary, NSString;

@protocol MGLFeature <MGLAnnotation>
- (id)attributeForKey:(NSString *)arg1;
@property(copy, nonatomic) NSDictionary *attributes;
- (NSDictionary *)geoJSONDictionary;
@property(copy, nonatomic) id identifier;
@end
