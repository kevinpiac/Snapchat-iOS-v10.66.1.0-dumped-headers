//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCApplicationDataChecker-Protocol.h"

@class NSString, UIApplication;

@interface SCManagerApplicationDataChecker : NSObject <SCApplicationDataChecker>
{
    UIApplication *_application;
}

- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1;
- (_Bool)isApplicationDataAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
