//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSQLiteDocObjectContext;

@interface SCSQLiteDocObjectBlockFetching : NSObject
{
    struct Borrowed _borrowed;
    SCSQLiteDocObjectContext *_docObjectContext;
    unsigned long long _changesTimestamp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Borrowed *)borrowed;
@property(readonly, nonatomic) unsigned long long changesTimestamp; // @synthesize changesTimestamp=_changesTimestamp;
@property(readonly, nonatomic) SCSQLiteDocObjectContext *docObjectContext; // @synthesize docObjectContext=_docObjectContext;
- (id)initWithDocObjectContext:(id)arg1 borrowed:(struct Borrowed *)arg2 changesTimestamp:(unsigned long long)arg3;

@end

