//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;

@interface SCScanConfiguration : NSObject
{
    CDUnknownBlockType _scanResultsHandler;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scanResultsHandler; // @synthesize scanResultsHandler=_scanResultsHandler;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end
