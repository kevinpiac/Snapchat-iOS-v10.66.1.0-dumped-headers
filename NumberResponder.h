//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADLNumberResponder-Protocol.h"

@interface NumberResponder : NSObject <ADLNumberResponder>
{
    CDUnknownBlockType _cb;
    CDUnknownBlockType _err;
}

+ (id)onCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithOnCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)onCompletion:(int)arg1;
- (void)onError:(int)arg1 message:(id)arg2;

@end

