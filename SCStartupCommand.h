//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAsyncCommand.h"

@class SCAppStartupState;

@interface SCStartupCommand : SCAsyncCommand
{
    struct NSString *_parentCommandIdentifier;
    _Bool _isExecutingOnRunner;
    _Bool _mustBeMainThread;
    _Bool _executed;
    SCAppStartupState *_appStartupState;
    unsigned long long _numberOfDelayedCommands;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCAppStartupState *appStartupState; // @synthesize appStartupState=_appStartupState;
- (void)didTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)execute;
@property(readonly, nonatomic) _Bool executed; // @synthesize executed=_executed;
- (id)initMainThreadCommandWithAppStartupState:(id)arg1;
- (id)initWithAppStartupState:(id)arg1;
- (void)markCommandEnd;
- (void)markCommandStart;
@property(readonly, nonatomic) _Bool mustBeMainThread; // @synthesize mustBeMainThread=_mustBeMainThread;
@property(readonly, nonatomic) unsigned long long numberOfDelayedCommands; // @synthesize numberOfDelayedCommands=_numberOfDelayedCommands;
- (void)setParentCommandIdentifier:(struct NSString *)arg1;
- (struct NSString *)taskId;

@end
