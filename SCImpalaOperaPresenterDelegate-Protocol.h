//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SCImpalaOperaPresenter;

@protocol SCImpalaOperaPresenterDelegate <NSObject>
- (void)impalaOperaPresenter:(id <SCImpalaOperaPresenter>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)impalaOperaPresenterWillBeginDismissing:(id <SCImpalaOperaPresenter>)arg1;
@end

