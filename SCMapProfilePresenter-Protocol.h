//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapPerson, UIViewController;
@protocol SCMapProfilePresenterDelegate, SCPageNameLogging;

@protocol SCMapProfilePresenter <NSObject>
- (void)presentProfileOnViewController:(UIViewController<SCPageNameLogging> *)arg1 person:(SCMapPerson *)arg2 delegate:(id <SCMapProfilePresenterDelegate>)arg3 hideMapSection:(_Bool)arg4;
@end

