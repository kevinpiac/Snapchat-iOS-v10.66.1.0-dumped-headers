//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnappablesDataResult-Protocol.h"

@class NSData, NSString, SCLensSbSnappableMessage;

@interface SCLensUriServiceSnappablesDataResult : NSObject <SCSnappablesDataResult>
{
    SCLensSbSnappableMessage *_message;
    NSData *_data;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithMessage:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) SCLensSbSnappableMessage *message; // @synthesize message=_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
