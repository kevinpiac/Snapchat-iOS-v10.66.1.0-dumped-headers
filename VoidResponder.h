//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADLVoidResponder-Protocol.h"

@interface VoidResponder : NSObject <ADLVoidResponder>
{
    CDUnknownBlockType _cb;
    CDUnknownBlockType _err;
}

+ (id)onCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithOnCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)onCompletion;
- (void)onError:(int)arg1 message:(id)arg2;

@end

