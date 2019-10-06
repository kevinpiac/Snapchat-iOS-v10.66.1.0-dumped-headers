//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilterProtocol-Protocol.h"

@class NSSet, NSString;

@interface SCDuplicateByLensTypeFilter : NSObject <SCLensFilterProtocol>
{
    NSSet *_frontGeoLenses;
    NSSet *_backGeoLenses;
    NSSet *_scheduledLenses;
    NSSet *_scanUnlockedLenses;
}

- (void).cxx_destruct;
- (id)filterLenses:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithLensesByType:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)priorityForLens:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

