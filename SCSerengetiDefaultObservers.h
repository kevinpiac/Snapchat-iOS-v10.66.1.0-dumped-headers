//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSerengetiBasicObservable;

@interface SCSerengetiDefaultObservers : NSObject
{
    SCSerengetiBasicObservable *_onKeyboardWillAnimate;
    SCSerengetiBasicObservable *_onActive;
    SCSerengetiBasicObservable *_onInactive;
}

- (void).cxx_destruct;
- (id)allDefaultObservables;
- (id)init;
@property(readonly) SCSerengetiBasicObservable *onActive; // @synthesize onActive=_onActive;
@property(readonly) SCSerengetiBasicObservable *onInactive; // @synthesize onInactive=_onInactive;
@property(readonly) SCSerengetiBasicObservable *onKeyboardWillAnimate; // @synthesize onKeyboardWillAnimate=_onKeyboardWillAnimate;

@end

