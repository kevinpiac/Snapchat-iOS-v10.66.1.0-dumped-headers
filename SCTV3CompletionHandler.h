//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCV3CompletionHandler-Protocol.h"

@interface SCTV3CompletionHandler : NSObject <TCV3CompletionHandler>
{
    CDUnknownBlockType _completion;
}

+ (id)completion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)onCompletion;

@end
