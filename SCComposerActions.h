//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCComposerActionHandlerHolder;

@interface SCComposerActions : NSObject
{
    SCComposerActionHandlerHolder *_actionHandlerHolder;
    NSDictionary *_actionByName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *actionByName; // @synthesize actionByName=_actionByName;
- (id)actionForName:(id)arg1;
@property(readonly, nonatomic) SCComposerActionHandlerHolder *actionHandlerHolder; // @synthesize actionHandlerHolder=_actionHandlerHolder;
- (id)initWithActionByName:(id)arg1 actionHandlerHolder:(id)arg2;

@end

