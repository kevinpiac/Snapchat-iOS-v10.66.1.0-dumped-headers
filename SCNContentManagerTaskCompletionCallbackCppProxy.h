//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerTaskCompletionCallback-Protocol.h"

@interface SCNContentManagerTaskCompletionCallbackCppProxy : NSObject <SCNContentManagerTaskCompletionCallback>
{
    struct Handle<std::__1::shared_ptr<snap::content_manager::TaskCompletionCallback>, std::__1::shared_ptr<snap::content_manager::TaskCompletionCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)done;
- (id)initWithCpp:(const shared_ptr_ed83fba8 *)arg1;

@end

