//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionMenuRenderableCellContentView-Protocol.h"

@class NSArray, NSMutableArray, SCGroupCreateChatViewModel, UIButton, UILabel;

@interface SCGroupCreationStatusCardView : UIView <SCActionMenuRenderableCellContentView>
{
    UILabel *_creationLabel;
    UIView *_groupBitmojiView;
    UIView *_addToGroupButtonContainerView;
    UIButton *_addToGroupButton;
    NSArray *_groupMembers;
    NSMutableArray *_groupMemberIcons;
    NSMutableArray *_groupMemberBitmojis;
    UIView *_overflowIcon;
    UILabel *_overflowLabel;
    SCGroupCreateChatViewModel *_viewModel;
}

+ (id)grayFrameColor;
- (void).cxx_destruct;
- (void)_initAddToGroupButton;
- (id)init;
- (void)initializeOverflow;
- (void)layoutBitmojis;
- (void)layoutSubviews;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
@property(retain, nonatomic) SCGroupCreateChatViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end
