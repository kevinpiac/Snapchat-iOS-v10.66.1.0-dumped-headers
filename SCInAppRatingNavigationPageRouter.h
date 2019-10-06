//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCInAppRatingPageRouter-Protocol.h"

@class NSString;
@protocol SCUIContainer;

@interface SCInAppRatingNavigationPageRouter : NSObject <SCInAppRatingPageRouter>
{
    id <SCUIContainer> _uiContainer;
    _Bool _includeLeaveFeedbackOption;
}

- (void).cxx_destruct;
- (id)_getPrepromptAlertWithUserActionDelegate:(id)arg1;
- (void)dismissLeaveFeedbackPage;
- (id)initWithUIContainer:(id)arg1 includeLeaveFeedbackOption:(_Bool)arg2;
- (void)showLeaveFeedbackPageWithUserActionDelegate:(id)arg1;
- (void)showPrepromptWithUserActionDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

