//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapLoggerEventSender, UIViewController;
@protocol SCMapStatusCreationPresenterDelegate;

@protocol SCMapStatusCreationPresenting <NSObject>
- (void)dismissWithCompletion:(void (^)(void))arg1;
- (void)presentStatusCreationOnViewController:(UIViewController *)arg1 delegate:(id <SCMapStatusCreationPresenterDelegate>)arg2 eventSender:(SCMapLoggerEventSender *)arg3 source:(long long)arg4 completion:(void (^)(void))arg5;
@end

