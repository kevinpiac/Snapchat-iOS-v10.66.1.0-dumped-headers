//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCanceling-Protocol.h"

@class NSString;

@interface SCMapAsyncRequestCanceler : NSObject <SCCanceling>
{
    _Bool _canceled;
    NSString *_requestKey;
}

- (void).cxx_destruct;
- (void)cancel;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(copy) NSString *requestKey; // @synthesize requestKey=_requestKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

