//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCSerengetiManager, SCSnapchatterServices;

@interface SCSerengetiServices : NSObject
{
    SCLazy *_serengetiManager;
    SCSnapchatterServices *_snapchatterServices;
}

- (void).cxx_destruct;
- (id)initWithSerengetiManager:(id)arg1 snapchatterServices:(id)arg2;
@property(readonly, nonatomic) SCSerengetiManager *serengetiManager;
@property(readonly, nonatomic) SCSnapchatterServices *snapchatterServices;

@end
