//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBitmojiSettingsViewController.h"

#import "SCMapModalViewControllerSubclass-Protocol.h"

@class NSString, SCMapModalViewController;

@interface SCMapBitmojiSettingsViewController : SCBitmojiSettingsViewController <SCMapModalViewControllerSubclass>
{
    SCMapModalViewController *_parentModalViewController;
}

- (void).cxx_destruct;
- (id)initWithPage:(unsigned long long)arg1 status:(unsigned long long)arg2 userSession:(id)arg3;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController; // @synthesize parentModalViewController=_parentModalViewController;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
