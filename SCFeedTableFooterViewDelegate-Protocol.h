//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCFeedTableFooterViewDelegate <NSObject>
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (_Bool)shouldShowLoadingView;
- (void)showMyContactsVC:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2 transitionStartingFrame:(struct CGRect)arg3;
- (void)tableFooterDidChange;
@end

