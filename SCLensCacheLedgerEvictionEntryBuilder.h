//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SCLensCacheMetadata;

@interface SCLensCacheLedgerEvictionEntryBuilder : NSObject
{
    SCLensCacheMetadata *_metadata;
    NSDate *_evictionDate;
}

+ (id)withLensCacheLedgerEvictionEntry:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEvictionDate:(id)arg1;
- (id)setMetadata:(id)arg1;

@end

