//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNGrapheneClientMetricsProcessor : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::graphene::ClientMetricsProcessor>, std::__1::shared_ptr<snap::graphene::ClientMetricsProcessor>> _cppRefHandle;
}

+ (id)getInstance:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)compact;
- (long long)enqueue:(int)arg1 partition:(int)arg2 metric:(int)arg3 dimensions:(id)arg4 value:(long long)arg5;
- (id)flush;
- (id)flushWithContext:(id)arg1;
- (id)initWithCpp:(const shared_ptr_4a21a387 *)arg1;

@end

