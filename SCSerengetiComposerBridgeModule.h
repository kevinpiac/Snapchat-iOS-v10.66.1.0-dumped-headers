//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerModuleFactory-Protocol.h"

@class NSArray, UIViewController;

@interface SCSerengetiComposerBridgeModule : NSObject <SCNComposerModuleFactory>
{
    NSArray *_hooks;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (id)initWithHooks:(id)arg1 viewController:(id)arg2;
- (id)loadModule;

@end

