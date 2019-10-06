//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, UILabel;
@protocol SCSafeBrowsingWarningViewDelegate;

@interface SCSafeBrowsingWarningView : UIView <TTTAttributedLabelDelegate>
{
    id <SCSafeBrowsingWarningViewDelegate> _delegate;
    long long _urlType;
    UILabel *_messageTop;
}

- (void).cxx_destruct;
- (void)goBackFromSafeBrowsing;
- (id)initWithDelegate:(id)arg1 urlType:(long long)arg2;
- (void)learnMoreFromSafeBrowsing;
- (void)loadWarningView;
- (void)updateWarningViewForUrlType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
