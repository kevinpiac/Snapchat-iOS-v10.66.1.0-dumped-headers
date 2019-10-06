//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"

@class NSString, SCHeader, SCUserSession, UIView;

@interface SCProductGenericViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate>
{
    unsigned long long _headerStyle;
    SCHeader *_header;
    UIView *_containerView;
    SCUserSession *_userSession;
}

+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3;
+ (id)addLabelToHeaderInSection:(id)arg1 labelText:(id)arg2;
+ (id)createHeaderLabel:(id)arg1;
+ (double)heightForHeaderInSection:(id)arg1 labelText:(id)arg2;
+ (id)viewForHeaderInSection:(id)arg1;
- (void).cxx_destruct;
- (id)backgroundColorForHeader;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)getTitle;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (_Bool)inValidView:(id)arg1;
- (void)initHeader;
- (id)initWithUserSession:(id)arg1 headerStyle:(unsigned long long)arg2;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)loadView;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)textInputFieldFont;
- (id)titleForHeader:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

