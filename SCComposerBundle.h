//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerBundle-Protocol.h"

@class NSBundle;

@interface SCComposerBundle : NSObject <SCNComposerBundle>
{
    NSBundle *_bundle;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)loadItem:(id)arg1;
- (id)loadItemFromBundle:(id)arg1 path:(id)arg2;

@end
