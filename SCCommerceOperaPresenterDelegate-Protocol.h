//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCCommerceOperaPresenter, SCLens;

@protocol SCCommerceOperaPresenterDelegate <NSObject>

@optional
- (void)commerceOperaViewerDidAppear:(SCCommerceOperaPresenter *)arg1;
- (void)commerceOperaViewerDidDisappear:(SCCommerceOperaPresenter *)arg1 unlockedLens:(SCLens *)arg2 additionalInfo:(NSDictionary *)arg3 wasBackgrounded:(_Bool)arg4;
@end

