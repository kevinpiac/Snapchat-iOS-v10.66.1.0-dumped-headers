//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class SCFideliusDeviceGraphDictionary;

@interface SCFideliusDeviceGraph : NSObject <NSCoding>
{
    SCFideliusDeviceGraphDictionary *_graph;
    long long _version;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) SCFideliusDeviceGraphDictionary *graph; // @synthesize graph=_graph;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) long long version; // @synthesize version=_version;

@end
