//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXRenderer-Protocol.h"

@class NSString, SCXSpriteRenderer;

@interface SCXPluginSpriteRenderer : NSObject <SCXRenderer>
{
    SCXSpriteRenderer *_renderer;
}

- (void).cxx_destruct;
- (void)complete;
- (id)initWithRenderer:(id)arg1;
- (void)prepare;
- (void)render:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

