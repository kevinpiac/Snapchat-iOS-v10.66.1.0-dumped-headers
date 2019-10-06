//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@protocol MTLFunction <NSObject>
@property(readonly) id <MTLDevice> device;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) unsigned long long functionType;
@property(copy) NSString *label;
@property(readonly) NSString *name;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *vertexAttributes;
@end

