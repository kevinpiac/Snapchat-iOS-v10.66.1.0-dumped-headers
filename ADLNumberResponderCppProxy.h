//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADLNumberResponder-Protocol.h"

@interface ADLNumberResponderCppProxy : NSObject <ADLNumberResponder>
{
    struct Handle<std::__1::shared_ptr<addlive::NumberResponder>, std::__1::shared_ptr<addlive::NumberResponder>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_b2984fc8 *)arg1;
- (void)onCompletion:(int)arg1;
- (void)onError:(int)arg1 message:(id)arg2;

@end

