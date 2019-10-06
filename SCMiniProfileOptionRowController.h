//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@protocol SCMiniProfileOptionRowControllerDelegate;

@interface SCMiniProfileOptionRowController : SCMiniProfileRowController
{
    long long _option;
    id <SCMiniProfileOptionRowControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (Class)cellClass;
- (double)cellHeight;
- (void)didSelectCell;
- (id)initWithOption:(long long)arg1 delegate:(id)arg2;
- (long long)option;
- (void)willDisplayCell:(id)arg1;

@end
