//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "SCSearchContentViewControlling-Protocol.h"

@class NSString, SCSearchContentViewControllerContext;

@interface SCCheetahSendToNavigationController : UINavigationController <SCSearchContentViewControlling>
{
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (_Bool)shouldBeginInteractiveDismissalGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

