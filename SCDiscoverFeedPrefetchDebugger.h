//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SCDiscoverFeedPrefetchDebugger : NSObject
{
    UIView *_debuggerView;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_show;
- (void)reset;
- (void)setupView:(struct CGRect)arg1;
- (void)updateviewItems:(id)arg1 viewPort:(struct CGRect)arg2;

@end

