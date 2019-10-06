//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCHeaderDataSource-Protocol.h"

@class NSString, SCHeader, SCTermsOfUseWhatsNewView, SIGActionButton, TTTAttributedLabel;
@protocol SCTermsOfUseUserInteractionDelegate;

@interface SCTermsOfUseView : UIView <SCHeaderDataSource>
{
    SCHeader *_header;
    SCTermsOfUseWhatsNewView *_whatsNewView;
    TTTAttributedLabel *_legalese;
    UIView *_legaleseDivider;
    SIGActionButton *_acceptButton;
    id <SCTermsOfUseUserInteractionDelegate> _acceptanceDelegate;
}

- (void).cxx_destruct;
- (void)_acceptButtonPressed;
- (void)_initAcceptButton;
- (void)_initHeaderWithDelegate:(id)arg1;
- (void)_initLegaleseWithDelegate:(id)arg1;
- (void)_initWhatsNewViewWithLinkDelegate:(id)arg1;
- (void)_initXButton;
- (id)backgroundColorForHeader;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 headerDelegate:(id)arg2 acceptanceDelegate:(id)arg3 linkDelegate:(id)arg4;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
