//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilterProtocol-Protocol.h"

@class NSString;
@protocol SCLensFilterProtocol;

@interface SCChainedLensFilter : NSObject <SCLensFilterProtocol>
{
    id <SCLensFilterProtocol> _filter;
    id <SCLensFilterProtocol> _nextFilter;
}

+ (id)chainedLensFilterWithFilters:(id)arg1;
- (void).cxx_destruct;
- (id)_arrayRepresentation;
- (unsigned long long)_count;
- (void)_traverseWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCLensFilterProtocol> filter; // @synthesize filter=_filter;
- (id)filterLenses:(id)arg1;
- (id)initWithFilter:(id)arg1 nextFilter:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <SCLensFilterProtocol> nextFilter; // @synthesize nextFilter=_nextFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
