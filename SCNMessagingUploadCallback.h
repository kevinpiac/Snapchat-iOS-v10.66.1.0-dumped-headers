//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNMessagingUploadCallback : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::messaging::UploadCallback>, std::__1::shared_ptr<snap::messaging::UploadCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_7587cc48 *)arg1;
- (void)onUploadFinished:(id)arg1 localMessageContent:(id)arg2;

@end

