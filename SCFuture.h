//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCFuture : NSObject
{
}

+ (id)immediateFutureWithError:(id)arg1;
+ (id)immediateFutureWithValue:(id)arg1;
- (id)_init;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1 performer:(id)arg2;

@end

