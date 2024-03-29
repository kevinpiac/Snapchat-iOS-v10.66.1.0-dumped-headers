//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaPage;
@protocol SCOperaBlockingViewControllerDelegate;

@protocol SCOperaBlockingViewController <NSObject>
- (id <SCOperaBlockingViewControllerDelegate>)blockingViewControllerDelegate;
- (void)didTryPagingWhenPagingDisabled;
- (_Bool)isBeingDismissed;
- (_Bool)isBlocking;
- (void)setBlockingViewControllerDelegate:(id <SCOperaBlockingViewControllerDelegate>)arg1;
- (_Bool)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(SCOperaPage *)arg1;
@end

