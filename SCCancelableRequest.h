//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCancelable-Protocol.h"
#import "SCCanceling-Protocol.h"

@class NSString, SCSentinel;

@interface SCCancelableRequest : NSObject <SCCanceling, SCCancelable>
{
    SCSentinel *_sentinel;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (_Bool)isCancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

