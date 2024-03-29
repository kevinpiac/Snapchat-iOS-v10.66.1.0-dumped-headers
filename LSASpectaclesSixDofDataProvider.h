//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAOfflineSixDofDataProviderProtocol-Protocol.h"

@class LSASixDofData, NSString;

@interface LSASpectaclesSixDofDataProvider : NSObject <LSAOfflineSixDofDataProviderProtocol>
{
    LSASixDofData *_sixDofData;
    struct vector<LSASixDofFrame *, std::__1::allocator<LSASixDofFrame *>> _frames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSixDofData:(id)arg1;
- (void)prepareSequenceIfRequired;
- (id)sixDofDataSequence;
- (id)sixDofFrameAtTimestamp:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

