//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsTarget-Protocol.h"

@class NSString;
@protocol SPPersonProcessor;

@interface SCBloopsTargetDummyImpl : NSObject <SCBloopsTarget>
{
    id <SPPersonProcessor> _personProcessor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPPersonProcessor> personProcessor; // @synthesize personProcessor=_personProcessor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

