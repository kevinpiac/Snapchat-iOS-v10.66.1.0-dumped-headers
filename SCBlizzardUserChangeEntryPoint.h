//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLoggerServices, SCUserSessionScope;

@interface SCBlizzardUserChangeEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCLoggerServices *_logger;
}

- (void).cxx_destruct;
- (id)end;
@property(nonatomic) __weak SCLoggerServices *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
