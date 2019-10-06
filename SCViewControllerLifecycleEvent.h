//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCViewControllerLifecycleEvent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _viewWillAppear_animated;
    _Bool _viewDidAppear_animated;
    _Bool _viewWillDisappear_animated;
    _Bool _viewDidDisappear_animated;
}

+ (id)viewDidAppearWithAnimated:(_Bool)arg1;
+ (id)viewDidDisappearWithAnimated:(_Bool)arg1;
+ (id)viewDidLoad;
+ (id)viewWillAppearWithAnimated:(_Bool)arg1;
+ (id)viewWillDisappearWithAnimated:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchViewDidLoad:(CDUnknownBlockType)arg1 viewWillAppear:(CDUnknownBlockType)arg2 viewDidAppear:(CDUnknownBlockType)arg3 viewWillDisappear:(CDUnknownBlockType)arg4 viewDidDisappear:(CDUnknownBlockType)arg5;

@end

