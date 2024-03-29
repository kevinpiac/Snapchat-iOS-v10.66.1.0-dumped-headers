//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRXWriteable-Protocol.h"

@class NSString;

@interface GRXWriteable : NSObject <GRXWriteable>
{
    CDUnknownBlockType _valueHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)writeableWithEventHandler:(CDUnknownBlockType)arg1;
+ (id)writeableWithSingleHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithValueHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeValue:(id)arg1;
- (void)writesFinishedWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

