//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNShimsDispatchQueue-Protocol.h"

@protocol SCPerforming;

@interface SCNativeDispatchQueue : NSObject <SCNShimsDispatchQueue>
{
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (id)initWithPerformer:(id)arg1;
- (void)submit:(id)arg1;
- (void)submitWithDelay:(id)arg1 delayMs:(long long)arg2;

@end

