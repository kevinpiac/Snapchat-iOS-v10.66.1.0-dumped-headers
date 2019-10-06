//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCommerceBitmojiViewModelProvider, SCCommerceScopedOptionsDataCoordinator, SCUserSession;

@interface SCCommerceDependencyManager : NSObject
{
    SCUserSession *_userSession;
    SCCommerceScopedOptionsDataCoordinator *_scopedOptionsDataCoordinator;
    SCCommerceBitmojiViewModelProvider *_bitmojiViewModelProvider;
}

- (void).cxx_destruct;
- (id)commerceCartManager;
- (id)commerceImageManager;
- (id)commerceManager;
- (id)commerceScopedOptionsDataCoordinator;
- (id)commerceSettingsManager;
- (id)initWithUserSession:(id)arg1;

@end

