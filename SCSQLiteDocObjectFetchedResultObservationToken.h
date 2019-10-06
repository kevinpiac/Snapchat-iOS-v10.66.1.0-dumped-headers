//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectObservationToken-Protocol.h"

@class NSString, SCSQLiteDocObjectContext;

@interface SCSQLiteDocObjectFetchedResultObservationToken : NSObject <SCDocObjectObservationToken>
{
    unsigned long long _fetchedResultId;
    long long _table;
    unsigned long long _token;
    SCSQLiteDocObjectContext *_objectContext;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFetchedResultId:(unsigned long long)arg1 table:(long long)arg2 token:(unsigned long long)arg3 objectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
