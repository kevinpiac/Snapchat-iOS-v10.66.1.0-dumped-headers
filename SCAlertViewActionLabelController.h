//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAlertViewActionController-Protocol.h"

@class NSString, UILabel;

@interface SCAlertViewActionLabelController : NSObject <SCAlertViewActionController>
{
    UILabel *_label;
}

+ (id)actionWithLabel:(id)arg1;
- (void).cxx_destruct;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (void)becomeFirstResponder;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithLabel:(id)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (_Bool)requiresAdditionalPaddingIfLastItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

