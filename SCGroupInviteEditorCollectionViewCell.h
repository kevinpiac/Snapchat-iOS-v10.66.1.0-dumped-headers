//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCPagingAwareCollectionViewCell-Protocol.h"

@class NSString, SCGroupInviteSingleStickerViewController;

@interface SCGroupInviteEditorCollectionViewCell : UICollectionViewCell <SCPagingAwareCollectionViewCell>
{
    SCGroupInviteSingleStickerViewController *_stickerVC;
}

- (void).cxx_destruct;
- (void)didBecomeActivePage;
- (void)didEndBeingFocusedPage;
- (void)layoutSubviews;
@property(retain, nonatomic) SCGroupInviteSingleStickerViewController *stickerVC; // @synthesize stickerVC=_stickerVC;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

